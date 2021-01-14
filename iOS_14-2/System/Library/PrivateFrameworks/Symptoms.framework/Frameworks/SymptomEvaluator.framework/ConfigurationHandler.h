/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)read:(id)arg1 returnedValues:(id)arg2 ;
+(void)initialize;
+(int)configureItems:(id)arg1 ;
+(id)sharedInstance;
+(id)objectForName:(id)arg1 ;
+(void)setConfigurationObject:(id)arg1 forName:(id)arg2 ;
+(id)classRepresentativeForName:(id)arg1 ;
+(void)dumpAll;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configure:(id)arg1 ;
-(void)_dumpState;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)init;
-(id)_configureBuildDetails:(id)arg1 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setAnnotation:(id)arg1 ;
-(id)_configureHandlerClass:(id)arg1 ;
-(void)_setAnnotation:(id)arg1 ;
@end

