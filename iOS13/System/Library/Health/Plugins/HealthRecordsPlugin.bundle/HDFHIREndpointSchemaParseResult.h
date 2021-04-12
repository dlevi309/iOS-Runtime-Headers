/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

