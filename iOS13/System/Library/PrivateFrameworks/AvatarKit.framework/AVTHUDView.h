/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CALayer, NSMutableArray;

@interface AVTHUDView : UIView {

	UILabel* _totalLatencyLabel;
	UILabel* _arKitLatencyLabel;
	UILabel* _updateSyncLatencyLabel;
	UILabel* _metalLatencyLabel;
	UILabel* _fpsLabel;
	UILabel* _audioTimeLabel;
	UILabel* _timeBetweenARFrameLabel;
	UILabel* _droppedFrameLabel;
	UILabel* _shaderCompilationLabel;
	SCD_Struct_AV14 _lastFrameData;
	CALayer* _arKitLatencyBar;
	CALayer* _updateLatencyBar;
	CALayer* _metalLatencyBar;
	NSMutableArray* _totalLatencyGraphLayers;
	int _selectedGraphIndex;

}
-(id)_label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_tapAction:(id)arg1 ;
-(void)updateWithData:(SCD_Struct_AV14)arg1 ;
-(void)_loadSubviews;
-(void)_updateLatencyBar:(SCD_Struct_AV14*)arg1 ;
-(void)_updateLatencyGraph:(SCD_Struct_AV14*)arg1 ;
@end

