/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUSceneSettings : PXSettings {

	BOOL _showConfidenceOverlay;
	unsigned long long _inspectorSortOrder;

}

@property (assign,nonatomic) BOOL showConfidenceOverlay;                         //@synthesize showConfidenceOverlay=_showConfidenceOverlay - In the implementation block
@property (assign,nonatomic) unsigned long long inspectorSortOrder;              //@synthesize inspectorSortOrder=_inspectorSortOrder - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(unsigned long long)inspectorSortOrder;
-(void)setShowConfidenceOverlay:(BOOL)arg1 ;
-(BOOL)showConfidenceOverlay;
-(void)setInspectorSortOrder:(unsigned long long)arg1 ;
@end

