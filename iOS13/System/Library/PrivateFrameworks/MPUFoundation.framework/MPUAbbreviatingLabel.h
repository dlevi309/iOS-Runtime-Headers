/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSMutableArray, NSArray;

@interface MPUAbbreviatingLabel : UILabel {

	NSMutableArray* _textRepresentationSizes;
	NSArray* _textRepresentations;

}

@property (nonatomic,copy) NSArray * textRepresentations;              //@synthesize textRepresentations=_textRepresentations - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)_calculateTextSizes;
-(void)_selectBestRepresentation;
-(void)_setTextRepresentation:(id)arg1 ;
-(void)setTextRepresentations:(NSArray *)arg1 ;
-(NSArray *)textRepresentations;
@end

