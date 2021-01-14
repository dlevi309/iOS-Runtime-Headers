/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)currentStepIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(id)initWithRequestHeader:(id)arg1 ;
@end

