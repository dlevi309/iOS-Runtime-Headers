/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(void)dealloc;
-(void)_update;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
-(void)_registerForKVO;
-(void)_unregisterForKVO;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)_replaceObservedProgressWith:(id)arg1 ;
@end

