/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying> {

	BasicRow<realm::Table>* _row;
	RLMClassInfo* _info;
	Class _objectClass;

}

@property (nonatomic,readonly) RLMObjectBase * object; 
-(id)initWithObject:(id)arg1 ;
-(RLMObjectBase *)object;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

