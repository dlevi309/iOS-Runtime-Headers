/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale, NSArray, NSString;

@interface EMTResult : NSObject <NSCopying> {

	BOOL _lowConfidence;
	float _confidence;
	NSLocale* _locale;
	NSArray* _tokens;
	NSString* _metaInfo;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                 //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) float confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL lowConfidence;               //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,readonly) NSString * metaInfo;              //@synthesize metaInfo=_metaInfo - In the implementation block
-(float)confidence;
-(NSArray *)tokens;
-(NSLocale *)locale;
-(BOOL)lowConfidence;
-(id)description;
-(unsigned long long)hash;
-(NSString *)metaInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5 ;
@end

