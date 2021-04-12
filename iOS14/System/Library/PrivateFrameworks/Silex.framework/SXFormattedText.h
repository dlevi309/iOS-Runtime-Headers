/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithText:(id)arg1 ;
-(id)description;
-(BOOL)shouldWrapText;
-(id)textWithValue:(id)arg1 withType:(int)arg2 ;
-(void)setShouldWrapText:(BOOL)arg1 ;
@end

