/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSString* _inputtedText;

}

@property (nonatomic,copy,readonly) NSString * inputtedText;              //@synthesize inputtedText=_inputtedText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputtedText:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSString *)inputtedText;
@end

