/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiNWActivityStateBin : PBCodable <NSCopying> {

	unsigned long long _residentTime;
	NSString* _state;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasResidentTime; 
@property (assign,nonatomic) unsigned long long residentTime;              //@synthesize residentTime=_residentTime - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setResidentTime:(unsigned long long)arg1 ;
-(void)setHasResidentTime:(BOOL)arg1 ;
-(BOOL)hasResidentTime;
-(unsigned long long)residentTime;
@end

