/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol FMFMapViewControllerDelegate <NSObject>
@optional
-(BOOL)canSelectAnnotation:(id)arg1;
-(id)titleViewForSelectedHandle;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
-(id)annotationContactForHandle:(id)arg1;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 didReceiveLocation:(id)arg2;

@end

