/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TSAnimatedViewPropertiesProviderType.h>

@class NSString, NSArray;

@interface TSPlayButtonHeadlineView : UIView <TSAnimatedViewPropertiesProviderType> {

	 insetView;
	 offensiveView;
	 thumbnailImageView;
	 playButton;
	 textView;
	 footerView;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
@property (copy,nonatomic) NSArray * accessibilityCustomActions; 
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomActions;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)animatedViewProperties;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

