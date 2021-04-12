/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSObject, RBSAssertionIdentifier;

@interface RBSInheritance : NSObject <BSXPCSecureCoding, BSDescriptionProviding, NSCopying> {

	NSString* _endowmentNamespace;
	NSString* _environment;
	NSObject*<OS_xpc_object> _encodedEndowment;
	RBSAssertionIdentifier* _originatingIdentifier;
	unsigned long long _originatingAttributePath;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * originatingIdentifier;              //@synthesize originatingIdentifier=_originatingIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAttributePath;                      //@synthesize originatingAttributePath=_originatingAttributePath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;                        //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                               //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,readonly) NSString * environment;                                           //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)environment;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5 ;
-(id)endowment;
-(NSString *)endowmentNamespace;
-(RBSAssertionIdentifier *)originatingIdentifier;
-(unsigned long long)originatingAttributePath;
-(NSObject*<OS_xpc_object>)encodedEndowment;
@end

