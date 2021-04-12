/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)featuresFromTagIDs:(id)arg1 ;
+(id)featuresFromPersonalizingItem:(id)arg1 personalizationTreatment:(id)arg2 ;
+(id)featureFromTagID:(id)arg1 ;
+(id)featureForFreeValuedIdentifier:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 allowFreeValued:(BOOL)arg2 ;
+(id)featuresFromIssue:(id)arg1 ;
+(id)featuresFromHeadline:(id)arg1 personalizationTreatment:(id)arg2 ;
+(id)featuresFromTodayPersonalizationEvent:(id)arg1 ;
+(id)featuresFromTag:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 ;
+(id)featureObserver;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)tagID;
-(void)setTagID:(NSString *)arg1 ;
-(NSString *)personalizationIdentifier;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)fr_description;
-(BOOL)shouldBeBoosted;
-(void)setShouldBeBoosted:(BOOL)arg1 ;
-(void)setPersonalizationIdentifier:(NSString *)arg1 ;
-(NSString *)fc_description;
@end

