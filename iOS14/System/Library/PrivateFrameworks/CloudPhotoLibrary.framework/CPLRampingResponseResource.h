/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying> {

	long long _retryAfterMillis;
	NSString* _resource;
	BOOL _allowed;
	SCD_Struct_CP1 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                     //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasAllowed; 
@property (assign,nonatomic) BOOL allowed;                            //@synthesize allowed=_allowed - In the implementation block
@property (assign,nonatomic) BOOL hasRetryAfterMillis; 
@property (assign,nonatomic) long long retryAfterMillis;              //@synthesize retryAfterMillis=_retryAfterMillis - In the implementation block
-(id)dictionaryRepresentation;
-(void)setResource:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)resource;
-(void)setAllowed:(BOOL)arg1 ;
-(BOOL)allowed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasResource;
-(void)setHasAllowed:(BOOL)arg1 ;
-(BOOL)hasAllowed;
-(void)setRetryAfterMillis:(long long)arg1 ;
-(void)setHasRetryAfterMillis:(BOOL)arg1 ;
-(BOOL)hasRetryAfterMillis;
-(long long)retryAfterMillis;
@end

