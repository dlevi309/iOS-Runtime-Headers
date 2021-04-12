/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSData;

@interface ICDataCryptor : NSObject <NSSecureCoding> {

	NSMutableDictionary* _tagDictionary;
	NSString* _cloudSyncingObjectIdentifier;
	NSMutableDictionary* _initializationVectorDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * tagDictionary;                               //@synthesize tagDictionary=_tagDictionary - In the implementation block
@property (nonatomic,retain) NSString * cloudSyncingObjectIdentifier;                           //@synthesize cloudSyncingObjectIdentifier=_cloudSyncingObjectIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initializationVectorDictionary;              //@synthesize initializationVectorDictionary=_initializationVectorDictionary - In the implementation block
@property (nonatomic,readonly) NSData * unwrappedKey; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCloudSyncingObjectIdentifier:(id)arg1 ;
-(id)encryptData:(id)arg1 identifier:(id)arg2 ;
-(id)decryptEncryptedData:(id)arg1 identifier:(id)arg2 ;
-(NSString *)cloudSyncingObjectIdentifier;
-(NSData *)unwrappedKey;
-(NSMutableDictionary *)tagDictionary;
-(NSMutableDictionary *)initializationVectorDictionary;
-(void)setTagDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCloudSyncingObjectIdentifier:(NSString *)arg1 ;
-(void)setInitializationVectorDictionary:(NSMutableDictionary *)arg1 ;
@end

