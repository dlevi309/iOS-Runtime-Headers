/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFServiceTreeMatching.h>

@protocol HFServiceTreeMatching;
@class NSArray, NSString;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching> {

	id<HFServiceTreeMatching> _rootServicePredicate;
	NSArray* _childServicePredicates;

}

@property (nonatomic,readonly) id<HFServiceTreeMatching> rootServicePredicate;              //@synthesize rootServicePredicate=_rootServicePredicate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childServicePredicates;                       //@synthesize childServicePredicates=_childServicePredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2 ;
-(id)matchingServicesForRootService:(id)arg1 ;
-(id<HFServiceTreeMatching>)rootServicePredicate;
-(NSArray *)childServicePredicates;
@end

