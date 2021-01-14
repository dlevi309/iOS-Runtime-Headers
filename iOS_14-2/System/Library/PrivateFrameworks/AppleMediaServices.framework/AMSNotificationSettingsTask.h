/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSString;

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _identifier;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)fetchAllSettings;
-(id)_generateParametersForItems:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)fetchSettingForIdentifier:(id)arg1 ;
-(id)updateSettings:(id)arg1 ;
-(id)fetchSettingsForSections:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(NSString *)identifier;
@end

