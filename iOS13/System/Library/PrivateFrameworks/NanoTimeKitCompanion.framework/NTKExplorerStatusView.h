/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class NSArray, NTKExplorerDotLayoutConstraints, NTKExplorerDotColorOptions, UIColor, NSString;

@interface NTKExplorerStatusView : UIView <CLKMonochromeComplicationView> {

	NSArray* _dotLayers;
	BOOL _observing;
	long long _targetDotPosition;
	BOOL _showsFullSignalStrength;
	id<CLKMonochromeFilterProvider> _filterProvider;
	NTKExplorerDotLayoutConstraints* _dotLayoutConstraints;
	NTKExplorerDotColorOptions* _dotColorOptions;
	long long _position;
	long long _signalStrengthBars;

}

@property (readonly) double dotDiameter; 
@property (readonly) double dotBorderWidth; 
@property (readonly) double dotSpacing; 
@property (readonly) double noServiceDotHeight; 
@property (nonatomic,readonly) UIColor * connectedDotColor; 
@property (nonatomic,readonly) UIColor * connectedDotBackgroundColor; 
@property (nonatomic,readonly) UIColor * noServiceDotColor; 
@property (nonatomic,retain) NTKExplorerDotLayoutConstraints * dotLayoutConstraints;              //@synthesize dotLayoutConstraints=_dotLayoutConstraints - In the implementation block
@property (nonatomic,retain) NTKExplorerDotColorOptions * dotColorOptions;                        //@synthesize dotColorOptions=_dotColorOptions - In the implementation block
@property (nonatomic,readonly) long long position;                                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long signalStrengthBars;                                        //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (assign,nonatomic) BOOL showsFullSignalStrength;                                        //@synthesize showsFullSignalStrength=_showsFullSignalStrength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;               //@synthesize filterProvider=_filterProvider - In the implementation block
+(id)noServiceDotColor;
+(id)connectedDotColor;
+(double)dotDiameter;
+(double)dotSpacing;
+(double)dotBorderWidth;
+(double)noServiceDotHeight;
-(long long)position;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)signalStrengthBars;
-(void)setSignalStrengthBars:(long long)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dotLayoutConstraints:(id)arg2 dotColorOptions:(id)arg3 ;
-(void)_layoutDotLayers;
-(UIColor *)noServiceDotColor;
-(UIColor *)connectedDotColor;
-(double)dotDiameter;
-(double)dotSpacing;
-(void)_updateDotFillStates;
-(double)dotBorderWidth;
-(double)noServiceDotHeight;
-(UIColor *)connectedDotBackgroundColor;
-(void)setDotPosition:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setShowsFullSignalStrength:(BOOL)arg1 ;
-(void)setDotLayoutConstraints:(NTKExplorerDotLayoutConstraints *)arg1 ;
-(void)setDotColorOptions:(NTKExplorerDotColorOptions *)arg1 ;
-(NTKExplorerDotLayoutConstraints *)dotLayoutConstraints;
-(NTKExplorerDotColorOptions *)dotColorOptions;
-(BOOL)showsFullSignalStrength;
@end

