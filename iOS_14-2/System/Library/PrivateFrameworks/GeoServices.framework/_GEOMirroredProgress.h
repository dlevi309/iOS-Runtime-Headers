/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_replaceObservedProgressWith:(id)arg1 ;
-(void)_unregisterForKVO;
-(void)_registerForKVO;
-(void)_update;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
-(void)dealloc;
@end

