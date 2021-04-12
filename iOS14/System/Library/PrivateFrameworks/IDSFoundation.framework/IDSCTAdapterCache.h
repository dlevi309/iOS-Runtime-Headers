/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSArray;

@interface IDSCTAdapterCache : NSObject {

	unsigned long long _dualSIMEnabled;
	unsigned long long _isAnySIMUsable;
	unsigned long long _isAnySIMInserted;
	unsigned long long _supportsIdentification;
	NSArray* _sims;

}

@property (assign,nonatomic) unsigned long long dualSIMEnabled;                      //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMUsable;                      //@synthesize isAnySIMUsable=_isAnySIMUsable - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMInserted;                    //@synthesize isAnySIMInserted=_isAnySIMInserted - In the implementation block
@property (assign,nonatomic) unsigned long long supportsIdentification;              //@synthesize supportsIdentification=_supportsIdentification - In the implementation block
@property (nonatomic,retain) NSArray * sims;                                         //@synthesize sims=_sims - In the implementation block
-(unsigned long long)isAnySIMInserted;
-(void)setDualSIMEnabled:(unsigned long long)arg1 ;
-(id)debugDescription;
-(void)setSupportsIdentification:(unsigned long long)arg1 ;
-(unsigned long long)dualSIMEnabled;
-(unsigned long long)isAnySIMUsable;
-(void)setSims:(NSArray *)arg1 ;
-(void)setIsAnySIMInserted:(unsigned long long)arg1 ;
-(unsigned long long)supportsIdentification;
-(void)setIsAnySIMUsable:(unsigned long long)arg1 ;
-(NSArray *)sims;
@end

