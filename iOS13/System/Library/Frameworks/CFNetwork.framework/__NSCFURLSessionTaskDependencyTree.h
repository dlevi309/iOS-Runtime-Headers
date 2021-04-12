/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTaskDependencyTree.h>

@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface __NSCFURLSessionTaskDependencyTree : NSURLSessionTaskDependencyTree {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
-(void)dealloc;
-(id)mainDocumentURL;
-(void)setMainDocumentURL:(id)arg1 ;
-(id)_dependencies;
-(id)_effectiveTree;
-(void)set_dependencies:(id)arg1 ;
-(void)set_effectiveTree:(id)arg1 ;
@end

