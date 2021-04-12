/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, HDClinicalGateway, NSString, NSArray, NSURL;

@interface HDFHIREndpointSchema : NSObject <NSCopying> {

	NSDictionary* _definition;
	HDClinicalGateway* _gateway;

}

@property (nonatomic,readonly) long long authType; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,copy,readonly) NSArray * bodyParameters; 
@property (nonatomic,copy,readonly) NSArray * headerParameters; 
@property (nonatomic,copy,readonly) NSArray * queryParameters; 
@property (nonatomic,copy,readonly) NSDictionary * definition;                //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) HDClinicalGateway * gateway;              //@synthesize gateway=_gateway - In the implementation block
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,copy,readonly) NSString * name; 
+(BOOL)validateName:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateDefinition:(id)arg1 error:(out id*)arg2 ;
+(id)_queryItemsFromParametersArray:(id)arg1 bindings:(id)arg2 queryMode:(long long)arg3 error:(out id*)arg4 ;
+(id)_percentEncodedQueryStringFromQueryItems:(id)arg1 additionalEncodableCharacters:(id)arg2 ;
+(id)_requiredRootKeys;
+(BOOL)_validateRootKey:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
+(BOOL)_validateAuthValue:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateParameterArray:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateMethodValue:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateNameValue:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateURLValue:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateParameterItem:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateQueryMode:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_queryItemsShouldIncludeParameterItem:(id)arg1 queryMode:(long long)arg2 ;
+(id)_valueForParameterItem:(id)arg1 bindings:(id)arg2 error:(out id*)arg3 ;
+(id)schemaWithDefinition:(id)arg1 gateway:(id)arg2 error:(out id*)arg3 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)baseURL;
-(NSString *)method;
-(BOOL)isEnabled;
-(NSDictionary *)definition;
-(NSArray *)queryParameters;
-(HDClinicalGateway *)gateway;
-(long long)authType;
-(id)createRequestWithCredential:(id)arg1 requestURL:(id)arg2 error:(out id*)arg3 ;
-(id)createRequestWithCredential:(id)arg1 bindings:(id)arg2 queryMode:(long long)arg3 error:(out id*)arg4 ;
-(id)createRequestWithBindings:(id)arg1 queryMode:(long long)arg2 error:(out id*)arg3 ;
-(id)initWithDefinition:(id)arg1 gateway:(id)arg2 ;
-(id)_createRequestWithCredential:(id)arg1 bindings:(id)arg2 orFullURL:(id)arg3 queryMode:(long long)arg4 error:(out id*)arg5 ;
-(id)_bindingsWithCredential:(id)arg1 ;
-(id)_URLWithBindings:(id)arg1 queryMode:(long long)arg2 error:(out id*)arg3 ;
-(BOOL)_applyAuthToRequest:(id)arg1 credential:(id)arg2 error:(out id*)arg3 ;
-(BOOL)_applyHeadersToRequest:(id)arg1 bindings:(id)arg2 queryMode:(long long)arg3 error:(out id*)arg4 ;
-(BOOL)_addHTTPBodyToRequest:(id)arg1 bindings:(id)arg2 queryMode:(long long)arg3 error:(out id*)arg4 ;
-(NSArray *)headerParameters;
-(NSArray *)bodyParameters;
@end

