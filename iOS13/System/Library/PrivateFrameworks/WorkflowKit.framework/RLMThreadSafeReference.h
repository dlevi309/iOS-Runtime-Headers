/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface RLMThreadSafeReference : NSObject {

	unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >* _reference;
	id _metadata;
	Class _type;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
+(id)referenceWithThreadConfined:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)resolveReferenceInRealm:(id)arg1 ;
-(id)initWithThreadConfined:(id)arg1 ;
@end

