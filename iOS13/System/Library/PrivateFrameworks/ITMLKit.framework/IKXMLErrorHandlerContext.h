/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSMutableString, NSMutableSet, NSString, NSArray;

@interface IKXMLErrorHandlerContext : NSObject {

	NSMutableString* _mutableErrorMessages;
	NSMutableSet* _mutableParserErrors;

}

@property (nonatomic,retain) NSMutableString * mutableErrorMessages;              //@synthesize mutableErrorMessages=_mutableErrorMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableParserErrors;                  //@synthesize mutableParserErrors=_mutableParserErrors - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) NSArray * parserErrors; 
-(id)init;
-(void)clear;
-(NSString *)errorMessage;
-(NSArray *)parserErrors;
-(NSMutableString *)mutableErrorMessages;
-(NSMutableSet *)mutableParserErrors;
-(void)setMutableErrorMessages:(NSMutableString *)arg1 ;
-(void)setMutableParserErrors:(NSMutableSet *)arg1 ;
@end

