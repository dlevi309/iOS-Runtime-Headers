/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CACLanguageModel *)languageModel;
-(BOOL)isCurrent;
-(void)dealloc;
-(void)setLanguageModel:(CACLanguageModel *)arg1 ;
-(void)setIsCurrent:(BOOL)arg1 ;
-(RXLanguageObjectRef)rxLanguageObject;
-(void)setRxLanguageObject:(RXLanguageObjectRef)arg1 ;
@end

