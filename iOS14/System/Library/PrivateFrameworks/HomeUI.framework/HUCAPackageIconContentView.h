/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, CAPackage, CALayer, NSArray, NSString;

@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate> {

	CAStateController* _stateController;
	CAPackage* _package;
	CALayer* _rootLayer;
	NSArray* _packageLayers;
	NSString* _stateName;
	CGSize _assetSize;

}

@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) CAPackage * package;                              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                              //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSArray * packageLayers;                          //@synthesize packageLayers=_packageLayers - In the implementation block
@property (assign,nonatomic) CGSize assetSize;                                 //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,retain) NSString * stateName;                             //@synthesize stateName=_stateName - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(CAStateController *)stateController;
-(CALayer *)rootLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(CAPackage *)package;
-(void)setState:(id)arg1 ;
-(NSString *)stateName;
-(void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3 ;
-(void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2 ;
-(void)setStateName:(NSString *)arg1 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)dealloc;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_tryReclaimPackageForIconDescriptor:(id)arg1 ;
-(CGSize)assetSize;
-(void)setAssetSize:(CGSize)arg1 ;
-(void)setPackageLayers:(NSArray *)arg1 ;
-(NSArray *)packageLayers;
-(void)_updatePackage;
-(void)_updateStateAnimated:(BOOL)arg1 ;
-(void)_updateForRTL:(BOOL)arg1 ;
-(void)_applyModifiers;
@end

