/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDFHIRSpecification, NSURLSession;

@interface HDFHIRSession : NSObject {

	HDFHIRSpecification* _specification;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSURLSession * URLSession;                               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRSpecification * specification;              //@synthesize specification=_specification - In the implementation block
-(id)init;
-(void)dealloc;
-(HDFHIRSpecification *)specification;
-(id)initWithSpecification:(id)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(id)_createDefaultURLSessionConfiguration;
-(void)_instantiateURLSessionWithConfiguration:(id)arg1 ;
-(void)_unitTesting_recreateURLSessionWithConfigurationBlock:(/*^block*/id)arg1 ;
@end

