/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject {

	NSString* _dependentURLPath;
	NSString* _dependentMimeType;
	NSString* _parentURLPath;
	NSString* _parentMimeType;

}

@property (nonatomic,retain) __NSURLSessionTaskDependencyResourceIdentifier * _dependent; 
@property (nonatomic,retain) __NSURLSessionTaskDependencyResourceIdentifier * _parent; 
@property (assign,nonatomic) float priority; 
@property (assign,nonatomic) BOOL exclusive; 
@property (readonly) NSString * dependentURLPath;                                                      //@synthesize dependentURLPath=_dependentURLPath - In the implementation block
@property (readonly) NSString * dependentMimeType;                                                     //@synthesize dependentMimeType=_dependentMimeType - In the implementation block
@property (readonly) NSString * parentURLPath;                                                         //@synthesize parentURLPath=_parentURLPath - In the implementation block
@property (readonly) NSString * parentMimeType;                                                        //@synthesize parentMimeType=_parentMimeType - In the implementation block
+(id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2 ;
+(id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2 ;
+(id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2 ;
+(id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2 ;
+(id)taskDependencyDescriptionWithParentURLPath:(id)arg1 ;
+(id)taskDependencyDescriptionWithParentMimeType:(id)arg1 ;
-(NSString *)dependentURLPath;
-(NSString *)dependentMimeType;
-(NSString *)parentURLPath;
-(NSString *)parentMimeType;
@end

