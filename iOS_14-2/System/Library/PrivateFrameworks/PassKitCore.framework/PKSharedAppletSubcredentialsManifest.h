/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSDictionary;

@interface PKSharedAppletSubcredentialsManifest : NSObject {

	NSString* _identifier;
	NSString* _version;
	NSDictionary* _items;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * items;                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSDictionary * sanitizedItems; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)items;
-(NSDictionary *)sanitizedItems;
-(id)description;
-(NSString *)identifier;
-(NSString *)version;
@end

