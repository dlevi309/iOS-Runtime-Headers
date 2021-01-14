/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDPromotionMLModelOutput : NSObject <MLFeatureProvider> {

	long long _promo;
	NSDictionary* _promoProbability;

}

@property (assign,nonatomic) long long promo;                              //@synthesize promo=_promo - In the implementation block
@property (nonatomic,retain) NSDictionary * promoProbability;              //@synthesize promoProbability=_promoProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(long long)promo;
-(id)initWithPromo:(long long)arg1 promoProbability:(id)arg2 ;
-(void)setPromo:(long long)arg1 ;
-(NSDictionary *)promoProbability;
-(void)setPromoProbability:(NSDictionary *)arg1 ;
@end

