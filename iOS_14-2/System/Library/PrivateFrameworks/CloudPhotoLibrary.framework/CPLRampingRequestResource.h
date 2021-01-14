/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {

	long long _numRequested;
	NSString* _resource;
	SCD_Struct_CP4 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                 //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasNumRequested; 
@property (assign,nonatomic) long long numRequested;              //@synthesize numRequested=_numRequested - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResource:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)resource;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasResource;
-(void)setNumRequested:(long long)arg1 ;
-(void)setHasNumRequested:(BOOL)arg1 ;
-(BOOL)hasNumRequested;
-(long long)numRequested;
@end

