/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAStateController, UIView, CALayer, CAPackage, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView {

	CAStateController* _stateController;
	UIView* _packageContentView;
	CALayer* _packageLayer;
	CAPackage* _package;
	CCUICAPackageDescription* _packageDescription;
	double _scale;

}

@property (nonatomic,retain) CAPackage * package;                                        //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * packageDescription;              //@synthesize packageDescription=_packageDescription - In the implementation block
@property (assign,nonatomic) double scale;                                               //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setPackage:(id)arg1 ;
-(CAPackage *)package;
-(void)setStateName:(id)arg1 ;
-(void)setPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(CCUICAPackageDescription *)packageDescription;
@end

