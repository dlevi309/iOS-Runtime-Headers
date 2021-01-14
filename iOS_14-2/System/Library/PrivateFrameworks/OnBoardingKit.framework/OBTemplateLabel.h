/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UILabel.h>

@class NSString;

@interface OBTemplateLabel : UILabel {

	NSString* _displayText;
	NSString* _symbolName;

}

@property (nonatomic,copy) NSString * displayText;              //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * symbolName;               //@synthesize symbolName=_symbolName - In the implementation block
-(NSString *)symbolName;
-(id)init;
-(void)setTitleTrailingSymbol:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setSymbolName:(NSString *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateTextAlignment;
@end

