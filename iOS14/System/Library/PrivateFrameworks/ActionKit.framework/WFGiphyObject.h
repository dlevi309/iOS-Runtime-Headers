/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSURL, NSDictionary;

@interface WFGiphyObject : MTLModel <NSSecureCoding, WFNaming, WFSerializableContent, MTLJSONSerializing> {

	NSString* _objectId;
	NSString* _type;
	NSString* _caption;
	NSURL* _url;
	NSDictionary* _images;

}

@property (nonatomic,copy,readonly) NSString * objectId;                         //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                          //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * images;                       //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)urlJSONTransformer;
+(id)imagesJSONTransformer;
+(id)captionJSONTransformer;
-(NSString *)caption;
-(id)originalImage;
-(NSString *)objectId;
-(NSURL *)url;
-(NSString *)wfName;
-(NSString *)type;
-(NSDictionary *)images;
-(id)wfSerializedRepresentation;
-(id)smallestImage;
@end

