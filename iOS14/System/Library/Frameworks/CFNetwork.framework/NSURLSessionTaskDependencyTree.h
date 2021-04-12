/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}

@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
+(id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)dependencyTreeDefaultWeb;
-(NSURL *)mainDocumentURL;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)dealloc;
@end

