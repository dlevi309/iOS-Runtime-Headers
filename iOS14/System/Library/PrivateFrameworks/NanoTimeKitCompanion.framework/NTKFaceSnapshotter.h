/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationCollectionObserver.h>

@class NTKFaceSnapshottingWindow, NSString;

@interface NTKFaceSnapshotter : NSObject <NTKComplicationCollectionObserver> {

	NTKFaceSnapshottingWindow* _snapshotWindow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultModernSnapshotOptions;
+(id)renderSnapshotFromWindow:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)complicationCollectionDidLoad:(id)arg1 ;
-(void)_queue_serviceRequestIfIdle;
-(void)_setupNotificationForCollectionLoadForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_mainQueue_serviceRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewControllerForFace:(id)arg1 withOptions:(id)arg2 ;
-(void)_showSnapshotWindowForDevice:(id)arg1 ;
-(void)_hideSnapshotWindow;
-(void)provideSnapshotOfFace:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

