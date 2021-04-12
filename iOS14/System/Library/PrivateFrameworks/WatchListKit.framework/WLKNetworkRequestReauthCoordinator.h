/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {

	NSLock* _lock;
	BOOL _sessionPrompt;

}

@property (assign) BOOL sessionPrompt;              //@synthesize sessionPrompt=_sessionPrompt - In the implementation block
+(id)coordinator;
-(void)unlock;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)lock;
-(id)_init;
-(void)dealloc;
-(void)setSessionPrompt:(BOOL)arg1 ;
-(BOOL)sessionPrompt;
-(void)markPrompt;
-(BOOL)didPrompt;
@end

