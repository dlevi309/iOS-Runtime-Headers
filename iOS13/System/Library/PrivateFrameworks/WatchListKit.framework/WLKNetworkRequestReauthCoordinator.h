/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSessionPrompt:(BOOL)arg1 ;
-(BOOL)sessionPrompt;
-(void)markPrompt;
-(BOOL)didPrompt;
@end

