/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/_TVInspectorCapturingViewDelegate.h>

@class NSHashTable, _TVInspectorCapturingView, TVApplicationController, NSString;

@interface _TVApplicationInspector : NSObject <_TVInspectorCapturingViewDelegate> {

	BOOL _inspectionModeEnabled;
	NSHashTable* _highlightViews;
	_TVInspectorCapturingView* _capturingView;
	TVApplicationController* _applicationController;

}

@property (nonatomic,readonly) _TVInspectorCapturingView * capturingView;                            //@synthesize capturingView=_capturingView - In the implementation block
@property (nonatomic,readonly) NSHashTable * highlightViews;                                         //@synthesize highlightViews=_highlightViews - In the implementation block
@property (nonatomic,__weak,readonly) TVApplicationController * applicationController;               //@synthesize applicationController=_applicationController - In the implementation block
@property (assign,getter=isInspectionModeEnabled,nonatomic) BOOL inspectionModeEnabled;              //@synthesize inspectionModeEnabled=_inspectionModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)rootView;
-(void)cancelHighlight;
-(TVApplicationController *)applicationController;
-(id)initWithApplicationController:(id)arg1 ;
-(void)setInspectionModeEnabled:(BOOL)arg1 ;
-(void)highlightViewElements:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3 ;
-(void)capturingView:(id)arg1 didCaptureTapOnView:(id)arg2 ;
-(_TVInspectorCapturingView *)capturingView;
-(NSHashTable *)highlightViews;
-(id)_highlightViewForElement:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3 ;
-(BOOL)isInspectionModeEnabled;
@end

