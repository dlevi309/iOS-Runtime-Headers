/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _transcriptions;
	NSArray* _rawTranscriptions;
	BOOL _final;
	SFTranscription* _bestTranscription;
	SFTranscription* _rawTranscription;

}

@property (nonatomic,copy,readonly) SFTranscription * rawTranscription;               //@synthesize rawTranscription=_rawTranscription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rawTranscriptions; 
@property (nonatomic,copy,readonly) SFTranscription * bestTranscription;              //@synthesize bestTranscription=_bestTranscription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transcriptions; 
@property (getter=isFinal,nonatomic,readonly) BOOL final;                             //@synthesize final=_final - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFinal;
-(id)description;
-(NSArray *)transcriptions;
-(SFTranscription *)bestTranscription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SFTranscription *)rawTranscription;
-(id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(BOOL)arg3 ;
-(id)expandTranscription:(id)arg1 ;
-(id)_initWithBestTranscription:(id)arg1 final:(BOOL)arg2 ;
-(NSArray *)rawTranscriptions;
@end

