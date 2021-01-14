/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSObject, RBSAssertionIdentifier;

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying> {

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
+(BOOL)supportsRBSXPCSecureCoding;
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(id)endowment;
-(NSString *)endowmentNamespace;
-(unsigned long long)originatingAttributePath;
-(RBSAssertionIdentifier *)originatingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

