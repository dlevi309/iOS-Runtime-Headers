/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AKCalloutBar *)bar;
-(int)position;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPosition:(int)arg1 ;
-(void)setBar:(AKCalloutBar *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

