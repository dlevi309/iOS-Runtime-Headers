/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFConfirmInteractionDialogResponse : WFDialogResponse <NSSecureCoding> {

	unsigned long long _interactionResponseCode;

}

@property (nonatomic,readonly) unsigned long long interactionResponseCode;              //@synthesize interactionResponseCode=_interactionResponseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)initWithInteractionResponseCode:(unsigned long long)arg1 ;
-(unsigned long long)interactionResponseCode;
@end

