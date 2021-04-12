/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ABCPbSummarySubmitRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {

	NSString* _buildPlatform;
	NSString* _deviceCategory;
	NSString* _deviceModel;
	NSMutableArray* _sigRequests;
	unsigned _ver;
	SCD_Struct_AB4 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasVer; 
@property (assign,nonatomic) unsigned ver;                              //@synthesize ver=_ver - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                    //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildPlatform; 
@property (nonatomic,retain) NSString * buildPlatform;                  //@synthesize buildPlatform=_buildPlatform - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCategory; 
@property (nonatomic,retain) NSString * deviceCategory;                 //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (nonatomic,retain) NSMutableArray * sigRequests;              //@synthesize sigRequests=_sigRequests - In the implementation block
+(Class)sigRequestType;
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(unsigned)ver;
-(BOOL)hasDeviceModel;
-(NSString *)deviceCategory;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceCategory:(NSString *)arg1 ;
-(BOOL)hasDeviceCategory;
-(BOOL)hasVer;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVer:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)buildPlatform;
-(void)addSigRequest:(id)arg1 ;
-(void)setBuildPlatform:(NSString *)arg1 ;
-(unsigned long long)sigRequestsCount;
-(void)clearSigRequests;
-(id)sigRequestAtIndex:(unsigned long long)arg1 ;
-(void)setHasVer:(BOOL)arg1 ;
-(BOOL)hasBuildPlatform;
-(NSMutableArray *)sigRequests;
-(void)setSigRequests:(NSMutableArray *)arg1 ;
@end

