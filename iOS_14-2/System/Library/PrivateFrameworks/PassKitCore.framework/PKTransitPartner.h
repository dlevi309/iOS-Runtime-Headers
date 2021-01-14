/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSSet;

@interface PKTransitPartner : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _localizedDisplayName;
	NSURL* _purchaseURL;
	NSSet* _supportedTransitNetworkIdentifiers;
	long long _maxNotificationCount;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                         //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * purchaseURL;                                     //@synthesize purchaseURL=_purchaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedTransitNetworkIdentifiers;              //@synthesize supportedTransitNetworkIdentifiers=_supportedTransitNetworkIdentifiers - In the implementation block
@property (assign,nonatomic) long long maxNotificationCount;                                 //@synthesize maxNotificationCount=_maxNotificationCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 purchaseURL:(id)arg3 supportedTransitNetworkIdentifiers:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(long long)maxNotificationCount;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)purchaseURL;
-(NSString *)identifier;
-(NSSet *)supportedTransitNetworkIdentifiers;
-(id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 ;
-(void)setMaxNotificationCount:(long long)arg1 ;
@end

