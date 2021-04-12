/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKit/UIContentConfiguration.h>

@class NSString, UIColor, UIFont, UIImage;

@interface WFParameterValuePickerTableViewCellConfiguration : NSObject <UIContentConfiguration> {

	BOOL _forceImageScaling;
	NSString* _text;
	NSString* _secondaryText;
	UIColor* _textColor;
	UIColor* _secondaryTextColor;
	UIFont* _textFont;
	UIFont* _secondaryTextFont;
	UIImage* _image;
	double _cornerRadius;

}

@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                  //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;              //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                       //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryTextFont;              //@synthesize secondaryTextFont=_secondaryTextFont - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double cornerRadius;                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL forceImageScaling;                  //@synthesize forceImageScaling=_forceImageScaling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)textColor;
-(void)setImage:(UIImage *)arg1 ;
-(UIFont *)textFont;
-(void)setText:(NSString *)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(UIImage *)image;
-(double)cornerRadius;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)makeContentView;
-(NSString *)text;
-(UIFont *)secondaryTextFont;
-(unsigned long long)hash;
-(id)updatedConfigurationForState:(id)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setForceImageScaling:(BOOL)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setSecondaryTextFont:(UIFont *)arg1 ;
-(BOOL)forceImageScaling;
@end

