/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
-(void)dealloc;
@end

