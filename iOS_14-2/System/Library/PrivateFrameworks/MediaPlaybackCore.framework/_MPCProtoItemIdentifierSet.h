/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {

	long long _cloudID;
	long long _delegateInfoID;
	long long _purchaseHistoryID;
	long long _storeAdamID;
	long long _storeSubscriptionAdamID;
	NSString* _cloudUniversalLibraryID;
	NSString* _contentItemID;
	SCD_Struct_MP24 _has;

}

@property (assign,nonatomic) BOOL hasDelegateInfoID; 
@property (assign,nonatomic) long long delegateInfoID;                        //@synthesize delegateInfoID=_delegateInfoID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                        //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                           //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreSubscriptionAdamID; 
@property (assign,nonatomic) long long storeSubscriptionAdamID;               //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudID; 
@property (assign,nonatomic) long long cloudID;                               //@synthesize cloudID=_cloudID - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryID; 
@property (assign,nonatomic) long long purchaseHistoryID;                     //@synthesize purchaseHistoryID=_purchaseHistoryID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryID; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryID;              //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(BOOL)hasContentItemID;
-(void)mergeFrom:(id)arg1 ;
-(long long)storeSubscriptionAdamID;
-(long long)storeAdamID;
-(id)description;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setContentItemID:(NSString *)arg1 ;
-(NSString *)contentItemID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPurchaseHistoryID:(long long)arg1 ;
-(long long)purchaseHistoryID;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCloudID:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(long long)cloudID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDelegateInfoID:(long long)arg1 ;
-(void)setHasDelegateInfoID:(BOOL)arg1 ;
-(BOOL)hasDelegateInfoID;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setHasCloudID:(BOOL)arg1 ;
-(BOOL)hasCloudID;
-(BOOL)hasCloudUniversalLibraryID;
-(long long)delegateInfoID;
-(void)setHasStoreSubscriptionAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreSubscriptionAdamID;
-(void)setHasPurchaseHistoryID:(BOOL)arg1 ;
-(BOOL)hasPurchaseHistoryID;
@end

