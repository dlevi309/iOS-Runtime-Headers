/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKPaymentProvisioningFlowControllerRequestContext : NSObject <NSSecureCoding> {

	NPKProtoStandaloneRequestHeader* _requestHeader;
	NSString* _currentStepIdentifier;

}

@property (readonly) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,readonly) NSString * currentStepIdentifier;                   //@synthesize currentStepIdentifier=_currentStepIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currentStepIdentifier;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(id)initWithRequestHeader:(id)arg1 ;
@end

