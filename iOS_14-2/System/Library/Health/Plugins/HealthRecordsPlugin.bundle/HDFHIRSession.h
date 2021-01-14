/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDFHIRSpecification, NSURLSession;

@interface HDFHIRSession : NSObject {

	HDFHIRSpecification* _specification;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSURLSession * URLSession;                               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRSpecification * specification;              //@synthesize specification=_specification - In the implementation block
-(id)initWithSpecification:(id)arg1 ;
-(id)init;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(HDFHIRSpecification *)specification;
-(NSURLSession *)URLSession;
-(void)dealloc;
-(id)_createDefaultURLSessionConfiguration;
-(void)_instantiateURLSessionWithConfiguration:(id)arg1 ;
-(void)_unitTesting_recreateURLSessionWithConfigurationBlock:(/*^block*/id)arg1 ;
@end

