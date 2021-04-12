/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class __NSURLSessionTaskDependencyResourceIdentifier, NSString;

@interface NSURLSessionTaskDependencyDescription : NSObject {

	BOOL _exclusive;
	float _priority;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;
	NSString* _dependentURLPath;
	NSString* _dependentMimeType;
	NSString* _parentURLPath;
	NSString* _parentMimeType;

}

@property (assign,nonatomic) float priority;                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
@property (readonly) NSString * dependentURLPath;               //@synthesize dependentURLPath=_dependentURLPath - In the implementation block
@property (readonly) NSString * dependentMimeType;              //@synthesize dependentMimeType=_dependentMimeType - In the implementation block
@property (readonly) NSString * parentURLPath;                  //@synthesize parentURLPath=_parentURLPath - In the implementation block
@property (readonly) NSString * parentMimeType;                 //@synthesize parentMimeType=_parentMimeType - In the implementation block
+(id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2 ;
+(id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2 ;
+(id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2 ;
+(id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2 ;
+(id)taskDependencyDescriptionWithParentMimeType:(id)arg1 ;
+(id)taskDependencyDescriptionWithParentURLPath:(id)arg1 ;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(NSString *)parentURLPath;
-(NSString *)dependentMimeType;
-(NSString *)parentMimeType;
-(NSString *)dependentURLPath;
-(id)description;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)dealloc;
@end

