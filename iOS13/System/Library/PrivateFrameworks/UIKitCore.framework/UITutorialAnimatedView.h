/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage;

@interface UITutorialAnimatedView : UIView {

	CALayer* _packageLayer;
	long long _appearance;
	CAPackage* _package;

}

@property (assign,nonatomic) long long appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) CAPackage * package;               //@synthesize package=_package - In the implementation block
-(void)setPackage:(CAPackage *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(long long)appearance;
-(void)setAppearance:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setPackage:(id)arg1 ;
-(CAPackage *)package;
@end

