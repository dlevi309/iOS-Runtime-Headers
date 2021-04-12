/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoObjectMessage : PBCodable <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)sockPuppetMessageForAssetDestroy;
-(id)sockPuppetMessageForPlayerItemDestroy;
-(id)sockPuppetMessageForPlayerItemGetCurrentTime;
-(id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
-(id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
-(id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
-(id)sockPuppetMessageForQueuePlayerDestroy;
-(id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
-(id)sockPuppetMessageForQueuePlayerRemoveAllItems;
@end

