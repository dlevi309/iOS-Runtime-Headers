/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, UIImage, UIColor, NSNumber, UIImageSymbolConfiguration, _UIGraphicsLetterpressStyle;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {

	NSString* title;
	NSAttributedString* attributedTitle;
	UIImage* image;
	UIImage* background;
	UIColor* titleColor;
	UIColor* imageColor;
	UIColor* shadowColor;
	NSNumber* drawingStroke;
	UIImageSymbolConfiguration* preferredSymbolConfiguration;
	BOOL isWidthVariant;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,retain) UIImage * background; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) UIColor * imageColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (nonatomic,retain) NSNumber * drawingStroke; 
@property (nonatomic,retain) _UIGraphicsLetterpressStyle * letterpressStyle; 
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)background;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(void)setBackground:(UIImage *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)imageColor;
-(void)setImageColor:(UIColor *)arg1 ;
-(NSNumber *)drawingStroke;
-(void)setDrawingStroke:(NSNumber *)arg1 ;
-(_UIGraphicsLetterpressStyle *)letterpressStyle;
-(void)setLetterpressStyle:(_UIGraphicsLetterpressStyle *)arg1 ;
-(BOOL)updateVariableLengthStringForView:(id)arg1 ;
@end

