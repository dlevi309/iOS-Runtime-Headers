/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString, NSURL, HMFBoolean, NSBundle;

@interface HMFProcessInfo : HMFObject <HMFLogging> {

	SCD_Struct_HM14* _auditToken;
	NSString* _applicationIdentifier;
	int _identifier;
	NSString* _name;
	NSURL* _executableURL;
	NSURL* _mainBundleURL;

}

@property (copy,readonly) NSString * applicationIdentifier; 
@property (getter=isCodeSigned,copy,readonly) HMFBoolean * codeSigned; 
@property (getter=isPlatformBinary,copy,readonly) HMFBoolean * platformBinary; 
@property (readonly) int identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSURL * executableURL;                                            //@synthesize executableURL=_executableURL - In the implementation block
@property (copy,readonly) NSURL * mainBundleURL;                                            //@synthesize mainBundleURL=_mainBundleURL - In the implementation block
@property (copy,readonly) NSBundle * mainBundle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)processInfo;
+(id)processInfoForXPCConnection:(id)arg1 ;
-(id)init;
-(id)shortDescription;
-(id)initWithAuditToken:(SCD_Struct_HM14)arg1 ;
-(id)logIdentifier;
-(NSString *)applicationIdentifier;
-(NSString *)name;
-(id)attributeDescriptions;
-(BOOL)getAuditToken:(SCD_Struct_HM14*)arg1 ;
-(id)isCodeSigned;
-(unsigned long long)hash;
-(NSURL *)executableURL;
-(id)isPlatformBinary;
-(int)identifier;
-(NSURL *)mainBundleURL;
-(id)valueForEntitlement:(id)arg1 ;
-(id)initWithIdentifier:(int)arg1 ;
-(NSBundle *)mainBundle;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

