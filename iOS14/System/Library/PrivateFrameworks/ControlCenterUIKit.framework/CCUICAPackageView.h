/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPackage:(CAPackage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(double)scale;
-(void)_setPackage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setScale:(double)arg1 ;
-(CAPackage *)package;
-(CCUICAPackageDescription *)packageDescription;
-(void)setStateName:(id)arg1 ;
@end

