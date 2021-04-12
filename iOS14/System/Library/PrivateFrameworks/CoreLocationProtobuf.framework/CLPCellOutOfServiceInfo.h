/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPLocation, NSString;

@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying> {

	CLPLocation* _location;
	NSString* _serviceProviderName;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) CLPLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;              //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasServiceProviderName;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(NSString *)serviceProviderName;
-(CLPLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

