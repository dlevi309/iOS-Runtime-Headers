/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString, HMFBoolean;

@interface HMFProcessInfo : HMFObject <HMFLogging> {

	SCD_Struct_HM11* _auditToken;
	NSString* _applicationIdentifier;
	int _identifier;
	NSString* _name;

}

@property (copy,readonly) NSString * applicationIdentifier; 
@property (getter=isCodeSigned,copy,readonly) HMFBoolean * codeSigned; 
@property (getter=isPlatformBinary,copy,readonly) HMFBoolean * platformBinary; 
@property (readonly) int identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processInfo;
+(id)logCategory;
+(id)processInfoForXPCConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(int)identifier;
-(id)initWithIdentifier:(int)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)shortDescription;
-(id)initWithAuditToken:(SCD_Struct_HM11)arg1 ;
-(id)attributeDescriptions;
-(BOOL)getAuditToken:(SCD_Struct_HM11*)arg1 ;
-(id)isCodeSigned;
-(id)isPlatformBinary;
@end

