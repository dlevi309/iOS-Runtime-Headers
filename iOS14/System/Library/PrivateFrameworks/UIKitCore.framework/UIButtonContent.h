/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)attributedTitle;
-(UIImage *)background;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setBackground:(UIImage *)arg1 ;
-(UIColor *)titleColor;
-(void)setImage:(UIImage *)arg1 ;
-(UIColor *)imageColor;
-(void)setDrawingStroke:(NSNumber *)arg1 ;
-(UIColor *)shadowColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(_UIGraphicsLetterpressStyle *)letterpressStyle;
-(UIImage *)image;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageColor:(UIColor *)arg1 ;
-(BOOL)isEmpty;
-(void)setLetterpressStyle:(_UIGraphicsLetterpressStyle *)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(NSNumber *)drawingStroke;
-(BOOL)updateVariableLengthStringForView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
@end

