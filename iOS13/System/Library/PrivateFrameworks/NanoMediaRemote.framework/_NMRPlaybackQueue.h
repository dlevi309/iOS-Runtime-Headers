/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_NM8 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
+(Class)contentItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
-(BOOL)hasLocation;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(void)addContentItem:(id)arg1 ;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
@end

