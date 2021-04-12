/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_NM12 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
+(Class)contentItemType;
-(id)dictionaryRepresentation;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSMutableArray *)contentItems;
-(int)location;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
@end

