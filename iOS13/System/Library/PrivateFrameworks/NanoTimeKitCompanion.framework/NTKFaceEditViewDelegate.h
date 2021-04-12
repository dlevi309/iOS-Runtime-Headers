/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKFaceEditViewDelegate <NSObject>
@required
-(void)editViewWillBeginScrolling:(id)arg1;
-(void)editView:(id)arg1 didStopAtEditMode:(long long)arg2;
-(void)editView:(id)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4;
-(void)editView:(id)arg1 keylineDidBreathe:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
-(void)editView:(id)arg1 keylineDidRubberBand:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
-(void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(long long)arg3;
-(BOOL)editViewShouldShowPageDotsOnBottom:(id)arg1;

@end

