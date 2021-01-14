/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SPProtoCacheAssets : PBCodable <NSCopying> {

	NSMutableArray* _assets;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
+(Class)assetsType;
-(unsigned long long)assetsCount;
-(NSMutableArray *)assets;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
@end

