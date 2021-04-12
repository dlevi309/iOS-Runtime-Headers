/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSData, NSString, NSDictionary, TKTokenID, NSMutableDictionary;

@interface TKTokenKeychainItem : NSObject {

	NSData* _accessControl;
	id _objectID;
	NSString* _label;
	NSDictionary* _constraints;
	TKTokenID* _tokenID;

}

@property (copy,readonly) NSMutableDictionary * keychainAttributes; 
@property (copy,readonly) NSData * encodedObjectID; 
@property (retain) TKTokenID * tokenID;                                          //@synthesize tokenID=_tokenID - In the implementation block
@property (retain) NSData * accessControl; 
@property (copy,readonly) id objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (copy) NSDictionary * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
+(id)operationMap;
+(id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3 ;
+(id)keychainItemWithInfo:(id)arg1 ;
-(NSDictionary *)constraints;
-(TKTokenID *)tokenID;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)keychainAttributes;
-(id)initWithItemInfo:(id)arg1 ;
-(id)objectID;
-(id)description;
-(id)initWithObjectID:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAccessControl:(NSData *)arg1 ;
-(void)setTokenID:(TKTokenID *)arg1 ;
-(NSData *)accessControl;
-(NSString *)label;
@end

