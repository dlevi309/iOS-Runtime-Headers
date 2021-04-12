/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)handle;
-(BOOL)isAvailable;
-(id)initWithSenderIdentity:(id)arg1 ;
-(id)initWithDanglingPlanItem:(id)arg1 ;
-(id)initWithDisabledCellularPlanItem:(id)arg1 ;
-(id)initUnavailableChannelWithIdentifier:(id)arg1 ;
-(id)initInvalidChannel;
-(NSString *)channelIdentifier;
-(NSString *)localizedLabel;
-(NSString *)localizedBadgeLabel;
-(TUSenderIdentity *)senderIdentity;
@end

