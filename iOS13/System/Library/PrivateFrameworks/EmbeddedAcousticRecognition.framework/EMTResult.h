/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(float)confidence;
-(NSArray *)tokens;
-(BOOL)lowConfidence;
-(id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5 ;
-(NSString *)metaInfo;
@end

