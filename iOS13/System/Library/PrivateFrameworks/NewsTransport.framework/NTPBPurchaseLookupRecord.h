/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBRecordBase, NSMutableArray;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying> {

	NSString* _appAdamID;
	NTPBRecordBase* _base;
	NSMutableArray* _bundleChannelTagIDs;
	NSMutableArray* _channelTagIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                             //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID;                              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelTagIDs;                    //@synthesize channelTagIDs=_channelTagIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleChannelTagIDs;              //@synthesize bundleChannelTagIDs=_bundleChannelTagIDs - In the implementation block
+(Class)channelTagIDsType;
+(Class)bundleChannelTagIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(BOOL)hasAppAdamID;
-(NSMutableArray *)channelTagIDs;
-(void)setChannelTagIDs:(NSMutableArray *)arg1 ;
-(void)setBundleChannelTagIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bundleChannelTagIDs;
-(BOOL)hasBase;
-(void)addChannelTagIDs:(id)arg1 ;
-(void)addBundleChannelTagIDs:(id)arg1 ;
-(void)clearChannelTagIDs;
-(unsigned long long)channelTagIDsCount;
-(id)channelTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBundleChannelTagIDs;
-(unsigned long long)bundleChannelTagIDsCount;
-(id)bundleChannelTagIDsAtIndex:(unsigned long long)arg1 ;
@end

