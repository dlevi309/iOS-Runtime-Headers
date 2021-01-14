/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

