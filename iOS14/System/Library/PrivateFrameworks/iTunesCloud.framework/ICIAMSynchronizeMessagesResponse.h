/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying> {

	NSMutableArray* _applicationMessageSyncResponses;

}

@property (nonatomic,retain) NSMutableArray * applicationMessageSyncResponses;              //@synthesize applicationMessageSyncResponses=_applicationMessageSyncResponses - In the implementation block
+(Class)applicationMessageSyncResponsesType;
-(id)dictionaryRepresentation;
-(unsigned long long)applicationMessageSyncResponsesCount;
-(id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addApplicationMessageSyncResponses:(id)arg1 ;
-(void)clearApplicationMessageSyncResponses;
-(NSMutableArray *)applicationMessageSyncResponses;
-(void)setApplicationMessageSyncResponses:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

