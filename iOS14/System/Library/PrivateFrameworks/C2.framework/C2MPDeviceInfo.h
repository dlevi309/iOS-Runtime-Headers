/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface C2MPDeviceInfo : PBCodable <NSCopying> {

	NSMutableArray* _internalTestConfigs;
	NSString* _processName;
	NSString* _processUuid;
	NSString* _processVersion;
	NSString* _productBuild;
	NSString* _productName;
	NSString* _productType;
	NSString* _productVersion;
	NSString* _userDefaultTestName;
	BOOL _isAppleInternal;
	SCD_Struct_C25 _has;

}

@property (nonatomic,readonly) BOOL hasProductName; 
@property (nonatomic,retain) NSString * productName;                            //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                            //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) BOOL hasProductVersion; 
@property (nonatomic,retain) NSString * productVersion;                         //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasProductBuild; 
@property (nonatomic,retain) NSString * productBuild;                           //@synthesize productBuild=_productBuild - In the implementation block
@property (assign,nonatomic) BOOL hasIsAppleInternal; 
@property (assign,nonatomic) BOOL isAppleInternal;                              //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessName; 
@property (nonatomic,retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessVersion; 
@property (nonatomic,retain) NSString * processVersion;                         //@synthesize processVersion=_processVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessUuid; 
@property (nonatomic,retain) NSString * processUuid;                            //@synthesize processUuid=_processUuid - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefaultTestName; 
@property (nonatomic,retain) NSString * userDefaultTestName;                    //@synthesize userDefaultTestName=_userDefaultTestName - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalTestConfigs;              //@synthesize internalTestConfigs=_internalTestConfigs - In the implementation block
+(Class)internalTestConfigType;
-(void)setProcessName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasProductName;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)productVersion;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(NSString *)processName;
-(NSString *)productType;
-(void)mergeFrom:(id)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(BOOL)hasProductType;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isAppleInternal;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcessName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)processVersion;
-(void)setProductBuild:(NSString *)arg1 ;
-(void)setProcessVersion:(NSString *)arg1 ;
-(void)setProcessUuid:(NSString *)arg1 ;
-(void)setUserDefaultTestName:(NSString *)arg1 ;
-(void)addInternalTestConfig:(id)arg1 ;
-(unsigned long long)internalTestConfigsCount;
-(void)clearInternalTestConfigs;
-(id)internalTestConfigAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProductVersion;
-(BOOL)hasProductBuild;
-(void)setHasIsAppleInternal:(BOOL)arg1 ;
-(BOOL)hasIsAppleInternal;
-(BOOL)hasProcessVersion;
-(BOOL)hasProcessUuid;
-(BOOL)hasUserDefaultTestName;
-(NSString *)productBuild;
-(NSString *)processUuid;
-(NSString *)userDefaultTestName;
-(NSMutableArray *)internalTestConfigs;
-(void)setInternalTestConfigs:(NSMutableArray *)arg1 ;
@end

