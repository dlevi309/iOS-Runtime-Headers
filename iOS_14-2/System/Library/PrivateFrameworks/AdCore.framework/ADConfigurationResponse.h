/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADConfigurationResponse : PBCodable <NSCopying> {

	int _bannerProxyType;
	NSString* _configVersion;
	NSMutableArray* _theConfigurations;
	NSString* _resourceConnectProxyURL;
	NSString* _resourceProxyURL;
	SCD_Struct_AD3 _has;

}

@property (nonatomic,retain) NSMutableArray * theConfigurations;              //@synthesize theConfigurations=_theConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceProxyURL; 
@property (nonatomic,retain) NSString * resourceProxyURL;                     //@synthesize resourceProxyURL=_resourceProxyURL - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceConnectProxyURL; 
@property (nonatomic,retain) NSString * resourceConnectProxyURL;              //@synthesize resourceConnectProxyURL=_resourceConnectProxyURL - In the implementation block
@property (assign,nonatomic) BOOL hasBannerProxyType; 
@property (assign,nonatomic) int bannerProxyType;                             //@synthesize bannerProxyType=_bannerProxyType - In the implementation block
@property (nonatomic,readonly) BOOL hasConfigVersion; 
@property (nonatomic,retain) NSString * configVersion;                        //@synthesize configVersion=_configVersion - In the implementation block
+(Class)theConfigurationType;
-(id)dictionaryRepresentation;
-(id)theConfigurationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasResourceConnectProxyURL;
-(BOOL)hasConfigVersion;
-(NSMutableArray *)theConfigurations;
-(NSString *)configVersion;
-(NSString *)resourceProxyURL;
-(void)mergeFrom:(id)arg1 ;
-(void)setBannerProxyType:(int)arg1 ;
-(void)addTheConfiguration:(id)arg1 ;
-(id)description;
-(unsigned long long)theConfigurationsCount;
-(NSString *)resourceConnectProxyURL;
-(unsigned long long)hash;
-(void)setHasBannerProxyType:(BOOL)arg1 ;
-(void)setTheConfigurations:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)bannerProxyType;
-(void)setResourceProxyURL:(NSString *)arg1 ;
-(id)bannerProxyTypeAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)StringAsBannerProxyType:(id)arg1 ;
-(void)setResourceConnectProxyURL:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearTheConfigurations;
-(BOOL)hasBannerProxyType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfigVersion:(NSString *)arg1 ;
-(BOOL)hasResourceProxyURL;
@end

