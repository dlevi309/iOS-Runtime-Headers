/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)keychainItemWithInfo:(id)arg1 ;
+(id)operationMap;
+(id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)constraints;
-(NSData *)accessControl;
-(NSMutableDictionary *)keychainAttributes;
-(id)objectID;
-(TKTokenID *)tokenID;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)setTokenID:(TKTokenID *)arg1 ;
-(NSData *)encodedObjectID;
-(void)setAccessControl:(NSData *)arg1 ;
-(id)initWithItemInfo:(id)arg1 ;
@end

