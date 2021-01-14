/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSDictionary, NSArray;

@interface HDFHIREndpointSchemaParseResult : NSObject {

	NSDictionary* _authorizationSchemas;
	NSArray* _resourceSchemas;

}

@property (nonatomic,copy) NSDictionary * authorizationSchemas;              //@synthesize authorizationSchemas=_authorizationSchemas - In the implementation block
@property (nonatomic,copy) NSArray * resourceSchemas;                        //@synthesize resourceSchemas=_resourceSchemas - In the implementation block
-(NSArray *)resourceSchemas;
-(NSDictionary *)authorizationSchemas;
-(void)setAuthorizationSchemas:(NSDictionary *)arg1 ;
-(void)setResourceSchemas:(NSArray *)arg1 ;
@end

