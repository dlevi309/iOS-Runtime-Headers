/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying> {

	Token _quasarToken;

}

@property (nonatomic,readonly) Token quasarToken;                        //@synthesize quasarToken=_quasarToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenName; 
@property (nonatomic,readonly) double start; 
@property (nonatomic,readonly) double end; 
@property (nonatomic,readonly) double silenceStart; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) BOOL hasSpaceAfter; 
@property (nonatomic,readonly) BOOL hasSpaceBefore; 
@property (nonatomic,readonly) NSString * phoneSequence; 
@property (nonatomic,readonly) NSString * ipaPhoneSequence; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)confidence;
-(double)end;
-(NSString *)phoneSequence;
-(NSString *)ipaPhoneSequence;
-(id)_initWithQuasarToken:(const Token*)arg1 ;
-(Token)quasarToken;
-(NSString *)tokenName;
-(double)silenceStart;
-(BOOL)hasSpaceAfter;
-(BOOL)hasSpaceBefore;
-(id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(BOOL)arg6 hasSpaceBefore:(BOOL)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 ;
@end

