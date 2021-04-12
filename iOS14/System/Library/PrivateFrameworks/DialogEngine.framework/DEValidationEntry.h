/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSNumber;

@interface DEValidationEntry : NSObject {

	NSString* _text;
	NSString* _textWithLineNumber;
	NSNumber* _lineNumber;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * textWithLineNumber;              //@synthesize textWithLineNumber=_textWithLineNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lineNumber;                      //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,retain) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
-(NSNumber *)lineNumber;
-(NSString *)filename;
-(void)setText:(NSString *)arg1 ;
-(void)setLineNumber:(NSNumber *)arg1 ;
-(NSString *)textWithLineNumber;
-(void)setTextWithLineNumber:(NSString *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)text;
@end

