/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface QLToolbarUnderlyingButton : UIButton {

	BOOL _offsetRoundedSelectedIndicator;
	NSString* _identifier;
	CGRect _selectedIndicatorBounds;

}

@property (copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign) CGRect selectedIndicatorBounds;                             //@synthesize selectedIndicatorBounds=_selectedIndicatorBounds - In the implementation block
@property (assign,nonatomic) BOOL offsetRoundedSelectedIndicator;              //@synthesize offsetRoundedSelectedIndicator=_offsetRoundedSelectedIndicator - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGRect)_selectedIndicatorBounds;
-(CGRect)selectedIndicatorBounds;
-(void)setSelectedIndicatorBounds:(CGRect)arg1 ;
-(BOOL)offsetRoundedSelectedIndicator;
-(void)setOffsetRoundedSelectedIndicator:(BOOL)arg1 ;
@end

