/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerEdgeSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerCornerSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings {

	NSString* _multitaskingGestureMode;
	NSString* _navigationGestureMode;
	_UIScreenEdgePanRecognizerEdgeSettings* _edgeSettings;
	_UIScreenEdgePanRecognizerDwellSettings* _dwellSettings;
	_UIScreenEdgePanRecognizerCornerSettings* _cornerSettings;

}

@property (nonatomic,copy) NSString * multitaskingGestureMode;                                       //@synthesize multitaskingGestureMode=_multitaskingGestureMode - In the implementation block
@property (nonatomic,copy) NSString * navigationGestureMode;                                         //@synthesize navigationGestureMode=_navigationGestureMode - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerEdgeSettings * edgeSettings;                  //@synthesize edgeSettings=_edgeSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerDwellSettings * dwellSettings;                //@synthesize dwellSettings=_dwellSettings - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerCornerSettings * cornerSettings;              //@synthesize cornerSettings=_cornerSettings - In the implementation block
+(id)settingsControllerModule;
-(NSString *)multitaskingGestureMode;
-(_UIScreenEdgePanRecognizerDwellSettings *)dwellSettings;
-(void)setMultitaskingGestureMode:(NSString *)arg1 ;
-(NSString *)navigationGestureMode;
-(void)setNavigationGestureMode:(NSString *)arg1 ;
-(void)setEdgeSettings:(_UIScreenEdgePanRecognizerEdgeSettings *)arg1 ;
-(void)setDwellSettings:(_UIScreenEdgePanRecognizerDwellSettings *)arg1 ;
-(void)setCornerSettings:(_UIScreenEdgePanRecognizerCornerSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerEdgeSettings *)edgeSettings;
-(_UIScreenEdgePanRecognizerCornerSettings *)cornerSettings;
@end

