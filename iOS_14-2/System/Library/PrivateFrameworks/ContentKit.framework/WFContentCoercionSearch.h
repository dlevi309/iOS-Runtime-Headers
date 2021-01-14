/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class WFCoercionOptions, WFContentCoercionNode, NSArray, WFType, NSMutableOrderedSet, NSMutableArray;

@interface WFContentCoercionSearch : NSObject {

	WFCoercionOptions* _options;
	WFContentCoercionNode* _startNode;
	NSArray* _goalItemClasses;
	WFType* _goalType;
	NSMutableOrderedSet* _visitedStates;
	NSMutableArray* _agenda;

}

@property (nonatomic,readonly) NSMutableOrderedSet * visitedStates;              //@synthesize visitedStates=_visitedStates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * agenda;                          //@synthesize agenda=_agenda - In the implementation block
@property (nonatomic,readonly) WFCoercionOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) WFContentCoercionNode * startNode;                //@synthesize startNode=_startNode - In the implementation block
@property (nonatomic,readonly) NSArray * goalItemClasses;                        //@synthesize goalItemClasses=_goalItemClasses - In the implementation block
@property (nonatomic,readonly) WFType * goalType;                                //@synthesize goalType=_goalType - In the implementation block
+(id)searchForCoercingItem:(id)arg1 toItemClass:(Class)arg2 options:(id)arg3 ;
+(id)searchForCoercingItem:(id)arg1 toItemClasses:(id)arg2 options:(id)arg3 ;
+(id)searchForCoercingItem:(id)arg1 toType:(id)arg2 options:(id)arg3 ;
-(WFCoercionOptions *)options;
-(NSMutableArray *)agenda;
-(WFType *)goalType;
-(WFContentCoercionNode *)startNode;
-(id)initWithStartNode:(id)arg1 goalItemClasses:(id)arg2 goalType:(id)arg3 options:(id)arg4 ;
-(BOOL)isCoercionPathAllowedForNode:(id)arg1 ;
-(BOOL)goalTest:(id)arg1 ;
-(id)nextPathNode;
-(id)badCoercionError;
-(void)runCoercion:(/*^block*/id)arg1 ;
-(void)continueCoercionWithContentItems:(id)arg1 error:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)runCoercionSynchronouslyWithError:(id*)arg1 ;
-(id)continueCoercionWithContentItems:(id)arg1 error:(id*)arg2 ;
-(NSArray *)goalItemClasses;
-(NSMutableOrderedSet *)visitedStates;
@end

