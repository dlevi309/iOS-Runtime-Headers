/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying> {

	vector<quasar::Token, std::__1::allocator<quasar::Token> >* _quasarTokens;
	vector<quasar::Token, std::__1::allocator<quasar::Token> >* _quasarPreItnTokens;

}

@property (nonatomic,readonly) vector<quasar::Token quasarTokens;                    //@synthesize quasarTokens=_quasarTokens - In the implementation block
@property (nonatomic,readonly) vector<quasar::Token quasarPreItnTokens;              //@synthesize quasarPreItnTokens=_quasarPreItnTokens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tokens; 
@property (nonatomic,copy,readonly) NSArray * preITNTokens; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tokens;
-(vector<quasar::Token)quasarTokens;
-(vector<quasar::Token)quasarPreItnTokens;
-(id)_initWithTokens:(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg1 preITNTokens:(vector<quasar::Token, std::__1::allocator<quasar::Token> >*)arg2 ;
-(NSArray *)preITNTokens;
@end

