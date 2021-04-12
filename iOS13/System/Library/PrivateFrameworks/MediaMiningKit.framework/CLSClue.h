/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString, NSDictionary, CLSInformant, CLSProfile;

@interface CLSClue : NSObject {

	BOOL _transient;
	NSString* _key;
	id _value;
	double _confidence;
	double _relevance;
	NSDictionary* _extraParameters;
	CLSInformant* _informant;
	CLSProfile* _profile;
	NSString* _informantIdentifier;
	NSString* _profileIdentifier;
	unsigned long long _versionCount;

}

@property (copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (retain) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign) double relevance;                             //@synthesize relevance=_relevance - In the implementation block
@property (retain) CLSInformant * informant;                     //@synthesize informant=_informant - In the implementation block
@property (retain) CLSProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * informantIdentifier;               //@synthesize informantIdentifier=_informantIdentifier - In the implementation block
@property (retain) NSString * profileIdentifier;                 //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign) BOOL transient;                               //@synthesize transient=_transient - In the implementation block
@property (assign) unsigned long long versionCount;              //@synthesize versionCount=_versionCount - In the implementation block
@property (retain) NSDictionary * extraParameters;               //@synthesize extraParameters=_extraParameters - In the implementation block
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(double)doubleValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(id)stringValue;
-(long long)integerValue;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)confidence;
-(void)setKey:(NSString *)arg1 ;
-(double)score;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)valueHash;
-(CLSProfile *)profile;
-(void)setProfile:(CLSProfile *)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(unsigned long long)enumValue;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(BOOL)transient;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(double)relevance;
-(void)_incrementVersionCount;
-(NSString *)informantIdentifier;
-(void)setInformantIdentifier:(NSString *)arg1 ;
-(long long)compareScore:(id)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)setRelevance:(double)arg1 ;
-(CLSInformant *)informant;
-(void)setInformant:(CLSInformant *)arg1 ;
-(unsigned long long)versionCount;
-(void)setVersionCount:(unsigned long long)arg1 ;
@end

