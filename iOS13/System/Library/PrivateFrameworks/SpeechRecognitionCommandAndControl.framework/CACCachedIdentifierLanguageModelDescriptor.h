/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACLanguageModel;

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {

	RXLanguageObjectRef _rxLanguageObject;
	BOOL _isCurrent;
	CACLanguageModel* _languageModel;

}

@property (retain) CACLanguageModel * languageModel;              //@synthesize languageModel=_languageModel - In the implementation block
@property (assign) BOOL isCurrent;                                //@synthesize isCurrent=_isCurrent - In the implementation block
-(void)dealloc;
-(BOOL)isCurrent;
-(CACLanguageModel *)languageModel;
-(void)setLanguageModel:(CACLanguageModel *)arg1 ;
-(void)setIsCurrent:(BOOL)arg1 ;
-(RXLanguageObjectRef)rxLanguageObject;
-(void)setRxLanguageObject:(RXLanguageObjectRef)arg1 ;
@end

