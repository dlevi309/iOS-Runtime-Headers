/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFServiceTreeMatching;
@class NSSet, NSString;

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying> {

	id<HFServiceTreeMatching> _predicate;
	NSSet* _characteristicRecipes;

}

@property (nonatomic,readonly) id<HFServiceTreeMatching> predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSSet * characteristicRecipes;                    //@synthesize characteristicRecipes=_characteristicRecipes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFServiceTreeMatching>)predicate;
-(id)matchResultForServices:(id)arg1 ;
-(NSSet *)characteristicRecipes;
-(id)initWithPredicate:(id)arg1 characteristicRecipes:(id)arg2 ;
@end

