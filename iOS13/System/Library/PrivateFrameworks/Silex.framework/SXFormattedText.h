/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXFormattedText : SXJSONObject {

	BOOL shouldWrapText;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) SXJSONArray * inlineTextStyles; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (assign,nonatomic) BOOL shouldWrapText; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)additions;
-(SXJSONArray *)inlineTextStyles;
-(NSString *)textStyle;
-(NSString *)text;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(BOOL)shouldWrapText;
-(id)textWithValue:(id)arg1 withType:(int)arg2 ;
-(void)setShouldWrapText:(BOOL)arg1 ;
@end

