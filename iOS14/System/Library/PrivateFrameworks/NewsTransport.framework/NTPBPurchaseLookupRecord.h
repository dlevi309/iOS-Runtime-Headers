/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)bundleChannelTagIDsType;
+(Class)channelTagIDsType;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(NSMutableArray *)bundleChannelTagIDs;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAppAdamID;
-(void)setBundleChannelTagIDs:(NSMutableArray *)arg1 ;
-(id)bundleChannelTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)addBundleChannelTagIDs:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)bundleChannelTagIDsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearChannelTagIDs;
-(void)clearBundleChannelTagIDs;
-(id)channelTagIDsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)appAdamID;
-(void)setChannelTagIDs:(NSMutableArray *)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSMutableArray *)channelTagIDs;
-(void)addChannelTagIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)channelTagIDsCount;
@end

