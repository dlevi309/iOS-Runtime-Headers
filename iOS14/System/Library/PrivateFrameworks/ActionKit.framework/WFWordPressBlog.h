/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, NSNumber, NSString, NSDictionary;

@interface WFWordPressBlog : MTLModel <MTLJSONSerializing> {

	BOOL _isAdmin;
	NSURL* _url;
	NSURL* _endpointURL;
	NSNumber* _blogId;
	NSString* _blogName;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * endpointURL;                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * blogId;                           //@synthesize blogId=_blogId - In the implementation block
@property (nonatomic,copy,readonly) NSString * blogName;                         //@synthesize blogName=_blogName - In the implementation block
@property (nonatomic,readonly) BOOL isAdmin;                                     //@synthesize isAdmin=_isAdmin - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)urlJSONTransformer;
+(id)endpointURLJSONTransformer;
+(id)blogIdJSONTransformer;
+(id)isAdminJSONTransformer;
+(id)blogWithEndpointURL:(id)arg1 ;
-(NSURL *)endpointURL;
-(BOOL)isAdmin;
-(NSURL *)url;
-(NSNumber *)blogId;
-(id)initWithEndpointURL:(id)arg1 ;
-(NSString *)blogName;
@end

