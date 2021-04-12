/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying> {

	NSMutableArray* _preferences;

}

@property (nonatomic,retain) NSMutableArray * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(Class)preferencesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPreferences:(NSMutableArray *)arg1 ;
-(NSMutableArray *)preferences;
-(void)addPreferences:(id)arg1 ;
-(void)clearPreferences;
-(unsigned long long)preferencesCount;
-(id)preferencesAtIndex:(unsigned long long)arg1 ;
@end

