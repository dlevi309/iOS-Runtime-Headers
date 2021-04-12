/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setCategory:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(id)description;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(void)clearAudioRoutes;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAudioRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)audioRoutes;
-(void)addAudioRoutes:(id)arg1 ;
-(unsigned long long)audioRoutesCount;
-(id)audioRoutesAtIndex:(unsigned long long)arg1 ;
@end

