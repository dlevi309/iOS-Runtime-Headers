/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(id)initWithProcessIdentifier:(int)arg1 ;
-(void)_populateResultWithLockWitness:(id)arg1 ;
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
@end

