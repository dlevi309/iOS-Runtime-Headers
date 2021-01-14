/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class CHTokenizedTextResult, NSString;

@interface CHContextualTextResult : NSObject {

	CHTokenizedTextResult* _textResult;
	NSString* _terminatingSpecialCharacter;

}

@property (nonatomic,retain) CHTokenizedTextResult * textResult;                  //@synthesize textResult=_textResult - In the implementation block
@property (nonatomic,retain) NSString * terminatingSpecialCharacter;              //@synthesize terminatingSpecialCharacter=_terminatingSpecialCharacter - In the implementation block
+(id)defaultWordTerminationCharacterForLocale:(id)arg1 ;
-(void)dealloc;
-(CHTokenizedTextResult *)textResult;
-(void)setTextResult:(CHTokenizedTextResult *)arg1 ;
-(id)initWithTextResult:(id)arg1 terminatingSpecialCharacter:(id)arg2 ;
-(NSString *)terminatingSpecialCharacter;
-(void)setTerminatingSpecialCharacter:(NSString *)arg1 ;
@end

