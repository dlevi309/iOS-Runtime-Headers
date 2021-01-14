/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface WFInputDateDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSDate* _inputtedDate;

}

@property (nonatomic,readonly) NSDate * inputtedDate;              //@synthesize inputtedDate=_inputtedDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputtedDate:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSDate *)inputtedDate;
@end

