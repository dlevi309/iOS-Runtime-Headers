/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSString, AXElement, NSDictionary;

@interface CACTextInsertionSpecifier : NSObject {

	NSString* _insertedString;
	AXElement* _axElement;
	NSString* _commandIdentifier;
	NSDictionary* _recognizedParams;
	NSString* _insertedCategoryID;
	NSRange _insertedRange;

}

@property (retain) NSString * insertedString;                    //@synthesize insertedString=_insertedString - In the implementation block
@property (assign) NSRange insertedRange;                        //@synthesize insertedRange=_insertedRange - In the implementation block
@property (retain) AXElement * axElement;                        //@synthesize axElement=_axElement - In the implementation block
@property (retain) NSString * commandIdentifier;                 //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (retain) NSDictionary * recognizedParams;              //@synthesize recognizedParams=_recognizedParams - In the implementation block
@property (retain) NSString * insertedCategoryID;                //@synthesize insertedCategoryID=_insertedCategoryID - In the implementation block
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(AXElement *)axElement;
-(void)setRecognizedParams:(NSDictionary *)arg1 ;
-(void)setInsertedString:(NSString *)arg1 ;
-(void)setInsertedRange:(NSRange)arg1 ;
-(void)setAxElement:(AXElement *)arg1 ;
-(void)setInsertedCategoryID:(NSString *)arg1 ;
-(NSRange)insertedRange;
-(NSString *)insertedCategoryID;
-(NSDictionary *)recognizedParams;
-(NSString *)insertedString;
@end

