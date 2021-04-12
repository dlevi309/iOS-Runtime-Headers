/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	float _screenSizeHeight;
	float _screenSizeWidth;
	BOOL _absolute;
	BOOL _integratedDisplay;
	SCD_Struct_MR15 _has;

}

@property (assign,nonatomic) BOOL hasAbsolute; 
@property (assign,nonatomic) BOOL absolute;                          //@synthesize absolute=_absolute - In the implementation block
@property (assign,nonatomic) BOOL hasIntegratedDisplay; 
@property (assign,nonatomic) BOOL integratedDisplay;                 //@synthesize integratedDisplay=_integratedDisplay - In the implementation block
@property (assign,nonatomic) BOOL hasScreenSizeWidth; 
@property (assign,nonatomic) float screenSizeWidth;                  //@synthesize screenSizeWidth=_screenSizeWidth - In the implementation block
@property (assign,nonatomic) BOOL hasScreenSizeHeight; 
@property (assign,nonatomic) float screenSizeHeight;                 //@synthesize screenSizeHeight=_screenSizeHeight - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAbsolute:(BOOL)arg1 ;
-(void)setHasAbsolute:(BOOL)arg1 ;
-(BOOL)hasAbsolute;
-(void)setIntegratedDisplay:(BOOL)arg1 ;
-(void)setHasIntegratedDisplay:(BOOL)arg1 ;
-(BOOL)hasIntegratedDisplay;
-(void)setScreenSizeWidth:(float)arg1 ;
-(void)setHasScreenSizeWidth:(BOOL)arg1 ;
-(BOOL)hasScreenSizeWidth;
-(void)setScreenSizeHeight:(float)arg1 ;
-(void)setHasScreenSizeHeight:(BOOL)arg1 ;
-(BOOL)hasScreenSizeHeight;
-(BOOL)absolute;
-(BOOL)integratedDisplay;
-(float)screenSizeWidth;
-(float)screenSizeHeight;
@end

