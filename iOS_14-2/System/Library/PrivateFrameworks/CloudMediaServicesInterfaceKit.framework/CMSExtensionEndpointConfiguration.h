/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/


@class NSMutableURLRequest, NSMutableSet, NSURL, NSDictionary;

@interface CMSExtensionEndpointConfiguration : NSObject {

	NSMutableURLRequest* _request;
	NSMutableSet* _optionalMethods;
	NSURL* _endpointURL;
	NSDictionary* _groupHeaders;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSURL * endpointURL;                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupHeaders;               //@synthesize groupHeaders=_groupHeaders - In the implementation block
@property (nonatomic,readonly) NSDictionary * headers;                    //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableSet * optionalMethods;              //@synthesize optionalMethods=_optionalMethods - In the implementation block
-(NSURL *)endpointURL;
-(id)init;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(NSMutableURLRequest *)request;
-(id)description;
-(NSDictionary *)headers;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4 ;
-(NSDictionary *)groupHeaders;
-(NSMutableSet *)optionalMethods;
-(void)setOptionalMethods:(NSMutableSet *)arg1 ;
@end

