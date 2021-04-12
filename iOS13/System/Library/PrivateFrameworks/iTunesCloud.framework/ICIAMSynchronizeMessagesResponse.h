/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)applicationMessageSyncResponsesCount;
-(id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1 ;
-(void)addApplicationMessageSyncResponses:(id)arg1 ;
-(void)clearApplicationMessageSyncResponses;
-(NSMutableArray *)applicationMessageSyncResponses;
-(void)setApplicationMessageSyncResponses:(NSMutableArray *)arg1 ;
@end

