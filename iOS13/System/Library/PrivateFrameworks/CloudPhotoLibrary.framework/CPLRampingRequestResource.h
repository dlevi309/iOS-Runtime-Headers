/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {

	long long _numRequested;
	NSString* _resource;
	SCD_Struct_CP2 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                 //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasNumRequested; 
@property (assign,nonatomic) long long numRequested;              //@synthesize numRequested=_numRequested - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)resource;
-(void)setResource:(NSString *)arg1 ;
-(BOOL)hasResource;
-(void)setNumRequested:(long long)arg1 ;
-(void)setHasNumRequested:(BOOL)arg1 ;
-(BOOL)hasNumRequested;
-(long long)numRequested;
@end

