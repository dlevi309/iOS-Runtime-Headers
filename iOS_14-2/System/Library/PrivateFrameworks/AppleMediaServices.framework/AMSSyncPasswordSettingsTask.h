/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, NSURLSessionDelegateAMSURLProtocolDelegate;
@class ACAccount, AMSProcessInfo, NSString;

@interface AMSSyncPasswordSettingsTask : AMSTask <AMSURLProtocolDelegate, AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	id<NSURLSessionDelegate><AMSURLProtocolDelegate> _delegate;
	unsigned long long _freeSetting;
	unsigned long long _paidSetting;

}

@property (nonatomic,readonly) ACAccount * account;                                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                                        //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,__weak,readonly) id<NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long freeSetting;                                                //@synthesize freeSetting=_freeSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long paidSetting;                                                //@synthesize paidSetting=_paidSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(unsigned long long)paidPasswordSettingFromServerValue:(unsigned long long)arg1 ;
+(unsigned long long)freePasswordSettingFromServerValue:(unsigned long long)arg1 ;
+(id)bagSubProfile;
+(id)serverValueForPaidPasswordSetting:(unsigned long long)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)serverValueForFreePasswordSetting:(unsigned long long)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(AMSProcessInfo *)clientInfo;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)delegate;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithAccount:(id)arg1 freeSetting:(unsigned long long)arg2 paidSetting:(unsigned long long)arg3 delegate:(id)arg4 bag:(id)arg5 ;
-(id)performSync;
-(unsigned long long)freeSetting;
-(unsigned long long)paidSetting;
@end

