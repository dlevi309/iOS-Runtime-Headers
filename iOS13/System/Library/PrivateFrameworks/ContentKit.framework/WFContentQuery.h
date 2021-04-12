/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDictionary *)userInfo;
-(WFContentSlice)slice;
-(WFContentPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(NSSet *)containedProperties;
-(void)setSlice:(WFContentSlice)arg1 ;
-(void)runWithObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithObjects:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(/*^block*/id)arg2 ;
@end

