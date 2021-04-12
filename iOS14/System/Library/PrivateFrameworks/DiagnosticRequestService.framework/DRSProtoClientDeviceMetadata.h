/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoClientDeviceMetadata : PBCodable <NSCopying> {

	NSString* _buildVariant;
	NSString* _deviceCategory;
	NSString* _deviceModel;
	NSString* _platform;

}

@property (nonatomic,readonly) BOOL hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCategory; 
@property (nonatomic,retain) NSString * deviceCategory;              //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                 //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasPlatform; 
@property (nonatomic,retain) NSString * platform;                    //@synthesize platform=_platform - In the implementation block
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)deviceModel;
-(void)setPlatform:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(NSString *)deviceCategory;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceCategory:(NSString *)arg1 ;
-(BOOL)hasDeviceCategory;
-(id)description;
-(BOOL)hasPlatform;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)buildVariant;
-(void)setBuildVariant:(NSString *)arg1 ;
-(BOOL)hasBuildVariant;
@end

