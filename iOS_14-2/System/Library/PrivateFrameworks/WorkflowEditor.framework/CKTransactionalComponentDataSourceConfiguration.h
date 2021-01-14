/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol NSObject;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSThread;

@interface CKTransactionalComponentDataSourceConfiguration : NSObject {

	CKSizeRange _sizeRange;
	Class _componentProvider;
	id<NSObject> _context;
	NSThread* _workThreadOverride;

}

@property (nonatomic,readonly) NSThread * workThreadOverride;              //@synthesize workThreadOverride=_workThreadOverride - In the implementation block
@property (nonatomic,readonly) Class componentProvider;                    //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                       //@synthesize context=_context - In the implementation block
-(id<NSObject>)context;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const CKSizeRange*)arg3 ;
-(NSThread *)workThreadOverride;
-(id)initWithComponentProvider:(Class)arg1 context:(id)arg2 sizeRange:(const CKSizeRange*)arg3 workThreadOverride:(id)arg4 ;
-(const CKSizeRange*)sizeRange;
-(Class)componentProvider;
@end

