/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSArray, NSString;

@interface SBOrientationAggdLogger : NSObject <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _layoutMonitor;
	long long _currentOrientation;
	unsigned long long _currentOrientationStartTime;
	NSArray* _currentElements;
	BOOL _isKeyboardOnScreen;
	unsigned long long _keyboardOnScreenStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)_bucketedElapsedTimeWithStartTime:(unsigned long long)arg1 ;
-(void)_orientationLockChanged:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_saveOrientationLockAggdValues;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)dealloc;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
@end

