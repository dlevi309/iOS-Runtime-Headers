/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMObjectBase *)object;
-(id)initWithObject:(id)arg1 ;
@end

