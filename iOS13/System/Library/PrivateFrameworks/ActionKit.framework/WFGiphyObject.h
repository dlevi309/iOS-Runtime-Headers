/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSURL, NSDictionary;

@interface WFGiphyObject : MTLModel <WFNaming, WFSerializableContent, MTLJSONSerializing> {

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
+(id)JSONKeyPathsByPropertyKey;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)urlJSONTransformer;
+(id)imagesJSONTransformer;
+(id)captionJSONTransformer;
-(NSString *)type;
-(NSURL *)url;
-(NSDictionary *)images;
-(NSString *)caption;
-(id)originalImage;
-(NSString *)objectId;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)smallestImage;
@end

