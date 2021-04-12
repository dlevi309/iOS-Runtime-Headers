/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface BKSLaunchdJobSpecification : NSObject <NSCopying, NSSecureCoding> {

	NSString* _labelPrefix;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSArray* _arguments;
	NSArray* _machServices;
	NSDictionary* _environment;
	NSString* _managedPersona;
	NSString* _standardOutput;
	NSString* _standardError;
	unsigned long long _executionOptions;

}

@property (nonatomic,copy) NSString * labelPrefix;                             //@synthesize labelPrefix=_labelPrefix - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                              //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                          //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSArray * machServices;                             //@synthesize machServices=_machServices - In the implementation block
@property (nonatomic,copy) NSDictionary * environment;                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                          //@synthesize managedPersona=_managedPersona - In the implementation block
@property (nonatomic,copy) NSString * standardOutput;                          //@synthesize standardOutput=_standardOutput - In the implementation block
@property (nonatomic,copy) NSString * standardError;                           //@synthesize standardError=_standardError - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;              //@synthesize executionOptions=_executionOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)specification;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(NSString *)executablePath;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)executionOptions;
-(NSArray *)arguments;
-(NSString *)standardError;
-(NSString *)managedPersona;
-(void)setStandardError:(NSString *)arg1 ;
-(NSString *)labelPrefix;
-(void)setLabelPrefix:(NSString *)arg1 ;
-(NSString *)standardOutput;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setStandardOutput:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSDictionary *)environment;
-(NSArray *)machServices;
-(void)setManagedPersona:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
@end

