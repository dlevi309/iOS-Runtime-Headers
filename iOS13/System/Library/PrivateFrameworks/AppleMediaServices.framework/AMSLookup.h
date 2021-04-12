/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString, AMSProcessInfo;

@interface AMSLookup : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	NSString* _caller;
	AMSProcessInfo* _clientInfo;
	NSString* _imageProfile;
	NSString* _keyProfile;
	NSString* _platform;
	long long _signatureType;
	long long _version;
	NSString* _language;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * caller;                        //@synthesize caller=_caller - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * imageProfile;                  //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,retain) NSString * keyProfile;                    //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,retain) NSString * platform;                      //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) long long signatureType;                  //@synthesize signatureType=_signatureType - In the implementation block
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSString *)platform;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)contract;
-(long long)signatureType;
-(id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2 ;
-(void)_addJSSignatureToRequest:(id)arg1 ;
-(NSString *)imageProfile;
-(NSString *)keyProfile;
-(id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3 ;
-(id)initWithBag:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3 ;
-(id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2 ;
-(void)setContract:(id)arg1 ;
-(void)setImageProfile:(NSString *)arg1 ;
-(void)setSignatureType:(long long)arg1 ;
@end

