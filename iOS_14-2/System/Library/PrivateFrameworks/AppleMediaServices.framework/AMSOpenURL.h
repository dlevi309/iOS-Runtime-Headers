/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol;
@class NSMutableSet, NSURL, AMSProcessInfo;

@interface AMSOpenURL : NSObject {

	NSMutableSet* _attemptedTargets;
	NSURL* _URL;
	AMSProcessInfo* _clientInfo;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) NSMutableSet * attemptedTargets;              //@synthesize attemptedTargets=_attemptedTargets - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                  //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                       //@synthesize bag=_bag - In the implementation block
+(BOOL)openStandardURL:(id)arg1 ;
+(id)_sortedTargets;
+(id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2 ;
+(void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3 ;
+(id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
-(id)_performOpen;
-(void)setAttemptedTargets:(NSMutableSet *)arg1 ;
-(BOOL)_openURL:(id)arg1 bundleInfo:(id)arg2 ;
-(BOOL)_shouldOpenURL:(id)arg1 ;
-(NSMutableSet *)attemptedTargets;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(NSURL *)URL;
@end

