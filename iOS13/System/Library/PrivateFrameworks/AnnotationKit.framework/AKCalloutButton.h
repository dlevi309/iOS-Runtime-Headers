/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton {

	int _position;
	AKCalloutBar* _bar;

}

@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic,__weak) AKCalloutBar * bar;              //@synthesize bar=_bar - In the implementation block
-(int)position;
-(void)setPosition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(AKCalloutBar *)bar;
-(void)setBar:(AKCalloutBar *)arg1 ;
@end

