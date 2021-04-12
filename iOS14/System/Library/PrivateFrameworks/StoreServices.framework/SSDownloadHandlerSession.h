/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownloadSession.h>

@class NSString, NSNumber;

@interface SSDownloadHandlerSession : SSDownloadSession {

	NSString* _downloadPhase;
	NSNumber* _duetTimeoutInterval;

}

@property (readonly) NSString * downloadPhase; 
@property (readonly) NSNumber * duetTimeoutInterval;              //@synthesize duetTimeoutInterval=_duetTimeoutInterval - In the implementation block
@property (assign) BOOL blocksOtherDownloads; 
@property (assign) BOOL canBePaused; 
@property (assign) BOOL needsPowerAssertion; 
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(void)_finishWithType:(int)arg1 error:(id)arg2 ;
-(void)_setBool:(BOOL)arg1 forSessionProperty:(const char*)arg2 ;
-(BOOL)blocksOtherDownloads;
-(BOOL)canBePaused;
-(void)disavowSessionWithError:(id)arg1 ;
-(void)finishSessionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)needsPowerAssertion;
-(void)setBlocksOtherDownloads:(BOOL)arg1 ;
-(void)setNeedsPowerAssertion:(BOOL)arg1 ;
-(NSNumber *)duetTimeoutInterval;
-(void)setPercentComplete:(float)arg1 ;
-(void)releaseSessionControl;
-(void)setCanBePaused:(BOOL)arg1 ;
-(NSString *)downloadPhase;
-(void)setStatusDescription:(id)arg1 ;
-(void)dealloc;
@end

