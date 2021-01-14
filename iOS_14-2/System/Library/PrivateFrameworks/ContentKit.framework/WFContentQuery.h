/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentPredicate, NSArray, NSDictionary, NSSet;

@interface WFContentQuery : NSObject <WFContentPropertyContainer> {

	WFContentPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSDictionary* _userInfo;
	WFContentSlice _slice;

}

@property (nonatomic,readonly) WFContentPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                       //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) WFContentSlice slice;                          //@synthesize slice=_slice - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
-(id)initWithPredicate:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(WFContentPredicate *)predicate;
-(NSSet *)containedProperties;
-(NSArray *)sortDescriptors;
-(WFContentSlice)slice;
-(id)description;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setSlice:(WFContentSlice)arg1 ;
-(void)runWithObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithObjects:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(/*^block*/id)arg2 ;
@end

