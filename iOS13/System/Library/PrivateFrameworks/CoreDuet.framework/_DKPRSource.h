/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _DKPRSource : PBCodable <NSCopying> {

	NSString* _bundleID;
	NSString* _deviceID;
	NSString* _groupID;
	NSString* _itemID;
	NSString* _sourceID;
	int _userID;
	SCD_Struct_DK5 _has;

}

@property (nonatomic,readonly) BOOL hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasItemID; 
@property (nonatomic,retain) NSString * itemID;                //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupID; 
@property (nonatomic,retain) NSString * groupID;               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasUserID; 
@property (assign,nonatomic) int userID;                       //@synthesize userID=_userID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)userID;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(NSString *)itemID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceID;
-(NSString *)groupID;
-(void)setUserID:(int)arg1 ;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setItemID:(NSString *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(BOOL)hasSourceID;
-(BOOL)hasBundleID;
-(BOOL)hasItemID;
-(BOOL)hasGroupID;
-(BOOL)hasDeviceID;
-(void)setHasUserID:(BOOL)arg1 ;
-(BOOL)hasUserID;
@end

