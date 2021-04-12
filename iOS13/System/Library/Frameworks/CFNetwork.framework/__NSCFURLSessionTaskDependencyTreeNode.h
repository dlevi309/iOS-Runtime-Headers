/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSURLSessionTaskDependencyDescription, NSMutableArray, NSNumber, NSMutableDictionary;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {

	NSURLSessionTaskDependencyDescription* dependencyDescription;
	NSMutableArray* children;
	NSMutableArray* childrenResourceIdentifiers;
	NSNumber* rootParentStreamID;
	NSMutableDictionary* _dependentToParentStreamIDs;
	NSMutableDictionary* _parentToParentStreamIDs;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * dependencyDescription; 
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSMutableArray * childrenResourceIdentifiers; 
@property (nonatomic,retain) NSNumber * rootParentStreamID; 
@property (nonatomic,retain) NSMutableDictionary * _dependentToParentStreamIDs;                          //@synthesize dependentToParentStreamIDs=_dependentToParentStreamIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _parentToParentStreamIDs;                             //@synthesize parentToParentStreamIDs=_parentToParentStreamIDs - In the implementation block
-(id)init;
-(void)dealloc;
-(NSURLSessionTaskDependencyDescription *)dependencyDescription;
-(NSMutableArray *)children;
-(NSMutableArray *)childrenResourceIdentifiers;
-(NSNumber *)rootParentStreamID;
-(NSMutableDictionary *)_dependentToParentStreamIDs;
-(NSMutableDictionary *)_parentToParentStreamIDs;
-(void)buildTree:(id)arg1 parentsToDependencies:(id)arg2 parentsToChildren:(id)arg3 ;
-(void)makePriorityInfoStartingFromStreamID:(int*)arg1 parentStream:(int)arg2 priorityInfo:(id)arg3 dependentToParentStreamIDs:(id)arg4 parentToParentStreamIDs:(id)arg5 ;
-(id)makePriorityInfoStartingFromStreamID:(int*)arg1 ;
-(void)setDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setChildrenResourceIdentifiers:(NSMutableArray *)arg1 ;
-(void)setRootParentStreamID:(NSNumber *)arg1 ;
-(void)set_dependentToParentStreamIDs:(NSMutableDictionary *)arg1 ;
-(void)set_parentToParentStreamIDs:(NSMutableDictionary *)arg1 ;
@end

