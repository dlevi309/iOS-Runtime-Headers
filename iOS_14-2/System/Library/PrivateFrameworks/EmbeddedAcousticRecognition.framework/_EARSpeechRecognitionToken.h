/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)confidence;
-(double)end;
-(double)start;
-(id)description;
-(NSString *)tokenName;
-(unsigned long long)hash;
-(BOOL)hasSpaceAfter;
-(BOOL)hasSpaceBefore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)phoneSequence;
-(NSString *)ipaPhoneSequence;
-(id)_initWithQuasarToken:(const Token*)arg1 ;
-(Token)quasarToken;
-(double)silenceStart;
-(id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(BOOL)arg6 hasSpaceBefore:(BOOL)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 ;
@end

