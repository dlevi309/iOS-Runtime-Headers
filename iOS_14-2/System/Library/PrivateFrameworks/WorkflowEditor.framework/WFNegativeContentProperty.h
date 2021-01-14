/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying> {

	WFContentProperty* _property;

}

@property (nonatomic,copy,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
-(WFContentProperty *)property;
-(id)initWithProperty:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

