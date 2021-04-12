/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, _PASLock;

@interface _PASBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(id)initWithProcessIdentifier:(int)arg1 ;
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
-(void)_populateResultWithLockWitness:(id)arg1 ;
@end

