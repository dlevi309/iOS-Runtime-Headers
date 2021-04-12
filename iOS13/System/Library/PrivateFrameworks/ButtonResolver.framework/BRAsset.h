/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/


@class NSDictionary;

@interface BRAsset : NSObject {

	BOOL _hasAudio;
	BOOL _hasHaptic;
	BOOL _isNull;
	long long _type;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                            //@synthesize hasAudio=_hasAudio - In the implementation block
@property (assign,nonatomic) BOOL hasHaptic;                           //@synthesize hasHaptic=_hasHaptic - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL isNull;                            //@synthesize isNull=_isNull - In the implementation block
@property (nonatomic,readonly) id propertyList; 
+(id)withType:(long long)arg1 andParameters:(id)arg2 ;
+(id)nullAsset;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)propertyList;
-(NSDictionary *)parameters;
-(BOOL)isNull;
-(void)setHasAudio:(BOOL)arg1 ;
-(BOOL)hasAudio;
-(id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3 ;
-(BOOL)hasHaptic;
-(void)setHasHaptic:(BOOL)arg1 ;
@end

