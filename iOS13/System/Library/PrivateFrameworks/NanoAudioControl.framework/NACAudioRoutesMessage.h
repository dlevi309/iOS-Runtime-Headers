/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NACAudioRoutesMessage : PBCodable <NSCopying> {

	NSMutableArray* _audioRoutes;
	NSString* _category;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRoutes;              //@synthesize audioRoutes=_audioRoutes - In the implementation block
+(Class)audioRoutesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)clearAudioRoutes;
-(NSMutableArray *)audioRoutes;
-(void)setAudioRoutes:(NSMutableArray *)arg1 ;
-(void)addAudioRoutes:(id)arg1 ;
-(unsigned long long)audioRoutesCount;
-(id)audioRoutesAtIndex:(unsigned long long)arg1 ;
@end

