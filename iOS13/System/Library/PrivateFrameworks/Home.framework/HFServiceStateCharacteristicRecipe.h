/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFServiceTreeMatching;
@class NSString;

@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying> {

	BOOL _required;
	NSString* _characteristicType;
	id<HFServiceTreeMatching> _servicePredicate;

}

@property (nonatomic,copy,readonly) NSString * characteristicType;                      //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) id<HFServiceTreeMatching> servicePredicate;              //@synthesize servicePredicate=_servicePredicate - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)recipeForRootServiceCharacteristicType:(id)arg1 required:(BOOL)arg2 ;
+(id)recipesForRootServiceCharacteristicTypes:(id)arg1 required:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characteristicType;
-(BOOL)isRequired;
-(id)matchResultForServices:(id)arg1 ;
-(id)initWithCharacteristicType:(id)arg1 servicePredicate:(id)arg2 required:(BOOL)arg3 ;
-(id<HFServiceTreeMatching>)servicePredicate;
@end

