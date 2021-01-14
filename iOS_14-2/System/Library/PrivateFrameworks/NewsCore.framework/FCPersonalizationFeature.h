/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying> {

	BOOL _shouldBeBoosted;
	NSString* _personalizationIdentifier;
	NSString* _fc_description;
	NSString* _tagID;

}

@property (nonatomic,retain) NSString * tagID;                                  //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,retain) NSString * personalizationIdentifier;              //@synthesize personalizationIdentifier=_personalizationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldBeBoosted;                              //@synthesize shouldBeBoosted=_shouldBeBoosted - In the implementation block
@property (nonatomic,readonly) NSString * fc_description;                       //@synthesize fc_description=_fc_description - In the implementation block
+(id)featuresFromIssue:(id)arg1 ;
+(id)featureForFreeValuedIdentifier:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 allowFreeValued:(BOOL)arg2 ;
+(id)featuresFromHeadline:(id)arg1 personalizationTreatment:(id)arg2 ;
+(id)featuresFromTag:(id)arg1 ;
+(id)featuresFromTodayPersonalizationEvent:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 ;
+(id)featureObserver;
+(id)featuresFromTagIDs:(id)arg1 ;
+(id)featureFromTagID:(id)arg1 ;
+(id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2 ;
-(NSString *)tagID;
-(id)init;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(void)setShouldBeBoosted:(BOOL)arg1 ;
-(void)setPersonalizationIdentifier:(NSString *)arg1 ;
-(NSString *)fc_description;
-(id)fr_description;
-(id)description;
-(NSString *)personalizationIdentifier;
-(unsigned long long)hash;
-(BOOL)shouldBeBoosted;
-(void)setTagID:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

