/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSURL, NSDictionary;

@interface WFUberProduct : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	BOOL _shared;
	NSString* _productId;
	NSString* _productDescription;
	unsigned long long _productGroup;
	NSString* _displayName;
	NSNumber* _capacity;
	NSURL* _pictureURL;

}

@property (nonatomic,readonly) NSString * productId;                             //@synthesize productId=_productId - In the implementation block
@property (nonatomic,readonly) NSString * productDescription;                    //@synthesize productDescription=_productDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long productGroup;                  //@synthesize productGroup=_productGroup - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSNumber * capacity;                              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) NSURL * pictureURL;                               //@synthesize pictureURL=_pictureURL - In the implementation block
@property (nonatomic,readonly) BOOL shared;                                      //@synthesize shared=_shared - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)pictureURLJSONTransformer;
+(id)productGroupJSONTransformer;
+(id)productWithProductId:(id)arg1 ;
-(NSNumber *)capacity;
-(NSString *)displayName;
-(BOOL)shared;
-(NSString *)productId;
-(NSURL *)pictureURL;
-(unsigned long long)productGroup;
-(id)initWithProductId:(id)arg1 ;
-(NSString *)productDescription;
@end

