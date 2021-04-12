/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
+(void)setConfigurationObject:(id)arg1 forName:(id)arg2 ;
+(int)read:(id)arg1 returnedValues:(id)arg2 ;
+(id)objectForName:(id)arg1 ;
+(id)classRepresentativeForName:(id)arg1 ;
+(void)dumpAll;
+(int)configureItems:(id)arg1 ;
-(int)configure:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_configureHandlerClass:(id)arg1 ;
-(id)_configureBuildDetails:(id)arg1 ;
@end

