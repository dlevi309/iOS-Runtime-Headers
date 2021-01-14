/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFPropertyListObject;
@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding> {

	id<WFPropertyListObject> _serializedParameterState;

}

@property (nonatomic,readonly) id<WFPropertyListObject> serializedParameterState;              //@synthesize serializedParameterState=_serializedParameterState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSerializedParameterState:(id)arg1 cancelled:(BOOL)arg2 ;
-(id<WFPropertyListObject>)serializedParameterState;
@end

