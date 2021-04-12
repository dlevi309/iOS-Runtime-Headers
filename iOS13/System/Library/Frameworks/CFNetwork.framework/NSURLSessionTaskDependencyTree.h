/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode, NSURL;

@interface NSURLSessionTaskDependencyTree : NSObject

@property (nonatomic,retain) NSMutableDictionary * _dependencies; 
@property (nonatomic,retain) __NSCFURLSessionTaskDependencyTreeNode * _effectiveTree; 
@property (nonatomic,retain) NSURL * mainDocumentURL; 
+(id)dependencyTreeDefaultWeb;
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
+(id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)mimeTypeForURLString:(id)arg1 ;
-(id)_parentForURLPath:(id)arg1 ;
-(id)_parentForMimeType:(id)arg1 ;
@end

