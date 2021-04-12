/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSArray, TKTokenConfiguration, NSString, NSDictionary;

@interface TKTokenKeychainContents : NSObject {

	NSArray* _items;
	TKTokenConfiguration* _configuration;
	NSString* _tokenID;

}

@property (readonly) TKTokenConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSString * tokenID;                                //@synthesize tokenID=_tokenID - In the implementation block
@property (copy,readonly) NSDictionary * keys; 
@property (copy,readonly) NSDictionary * certificates; 
@property (copy,readonly) NSArray * items; 
-(NSDictionary *)keys;
-(id)initWithTokenID:(id)arg1 ;
-(NSDictionary *)certificates;
-(NSString *)tokenID;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(TKTokenConfiguration *)configuration;
-(NSArray *)items;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)fillWithItems:(id)arg1 ;
-(id)certificateForKey:(id)arg1 ;
@end

