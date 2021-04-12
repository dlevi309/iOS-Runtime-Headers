/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3 ;
+(id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
+(id)_sortedTargets;
+(id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2 ;
-(NSURL *)URL;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
-(id)_performOpen;
-(void)setAttemptedTargets:(NSMutableSet *)arg1 ;
-(BOOL)_openURL:(id)arg1 bundleInfo:(id)arg2 ;
-(BOOL)_shouldOpenURL:(id)arg1 ;
-(NSMutableSet *)attemptedTargets;
@end

