/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding> {

	BOOL _available;
	NSString* _channelIdentifier;
	NSString* _localizedLabel;
	NSString* _localizedBadgeLabel;
	NSString* _handle;
	TUSenderIdentity* _senderIdentity;

}

@property (nonatomic,readonly) NSString * channelIdentifier;                   //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel;                      //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (nonatomic,readonly) NSString * localizedBadgeLabel;                 //@synthesize localizedBadgeLabel=_localizedBadgeLabel - In the implementation block
@property (nonatomic,readonly) NSString * handle;                              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) TUSenderIdentity * senderIdentity;              //@synthesize senderIdentity=_senderIdentity - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;              //@synthesize available=_available - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAvailable;
-(NSString *)handle;
-(NSString *)localizedLabel;
-(NSString *)channelIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedBadgeLabel;
-(id)initWithCoder:(id)arg1 ;
-(TUSenderIdentity *)senderIdentity;
@end

