/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CLPLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(BOOL)hasServiceProviderName;
-(NSString *)serviceProviderName;
@end

