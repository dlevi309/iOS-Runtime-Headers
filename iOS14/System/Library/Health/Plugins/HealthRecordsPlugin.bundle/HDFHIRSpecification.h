/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, HDClinicalGateway, NSSet;

@interface HDFHIRSpecification : NSObject <NSCopying> {

	NSDictionary* _authorizationSchemas;
	NSArray* _resourceSchemas;
	HDClinicalGateway* _gateway;

}

@property (nonatomic,copy,readonly) NSDictionary * authorizationSchemas;              //@synthesize authorizationSchemas=_authorizationSchemas - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resourceSchemas; 
@property (nonatomic,copy,readonly) HDClinicalGateway * gateway;                      //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,copy,readonly) NSSet * pinset; 
+(id)specificationFromGateway:(id)arg1 error:(id*)arg2 ;
+(id)endpointSchemasForGateway:(id)arg1 ;
-(id)init;
-(HDClinicalGateway *)gateway;
-(NSSet *)pinset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldRefreshTokenForCredentialedTaskError:(id)arg1 ;
-(id)errorForResourceRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(BOOL)shouldRetryFailedResourceTaskWithError:(id)arg1 ;
-(id)authorizationSchemaForType:(long long)arg1 ;
-(id)errorForAuthorizationRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(NSArray *)resourceSchemas;
-(NSDictionary *)authorizationSchemas;
-(id)initWithGateway:(id)arg1 ;
-(void)_parseEndpointSchemas;
@end

