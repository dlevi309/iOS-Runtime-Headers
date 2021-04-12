/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSDictionary;

@interface PKSharedAppletSubcredentialsManifest : NSObject {

	NSString* _identifier;
	NSString* _version;
	NSDictionary* _items;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * items;               //@synthesize items=_items - In the implementation block
-(id)init;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(NSDictionary *)items;
@end

