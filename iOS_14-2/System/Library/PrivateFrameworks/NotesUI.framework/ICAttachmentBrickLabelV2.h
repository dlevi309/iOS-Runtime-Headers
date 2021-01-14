/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UILabel.h>

@class UIColor, NSAttributedString, NSString;

@interface ICAttachmentBrickLabelV2 : UILabel {

	BOOL _vibrant;
	BOOL _disableVibrancy;
	UIColor* _defaultTextColor;

}

@property (assign,nonatomic) BOOL vibrant;                                               //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,nonatomic) BOOL disableVibrancy;                                       //@synthesize disableVibrancy=_disableVibrancy - In the implementation block
@property (nonatomic,retain) UIColor * defaultTextColor;                                 //@synthesize defaultTextColor=_defaultTextColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * ic_attributedStringValue; 
@property (nonatomic,retain) NSString * ic_stringValue; 
-(void)setText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(BOOL)vibrant;
-(id)text;
-(UIColor *)defaultTextColor;
-(void)setVibrant:(BOOL)arg1 ;
-(BOOL)allowsVibrancy;
-(NSString *)ic_stringValue;
-(void)setDisableVibrancy:(BOOL)arg1 ;
-(BOOL)disableVibrancy;
-(NSAttributedString *)ic_attributedStringValue;
-(void)setIc_attributedStringValue:(NSAttributedString *)arg1 ;
-(void)setDefaultTextColor:(UIColor *)arg1 ;
-(void)setIc_stringValue:(NSString *)arg1 ;
@end

