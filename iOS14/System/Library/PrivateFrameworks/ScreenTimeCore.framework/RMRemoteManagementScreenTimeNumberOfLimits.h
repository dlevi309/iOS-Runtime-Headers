/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMRemoteManagementScreenTimeNumberOfLimits : PBCodable <NSCopying> {

	unsigned long long _numberOfAppLimits;
	unsigned long long _numberOfCategoryLimits;
	unsigned long long _timestamp;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfAppLimits; 
@property (assign,nonatomic) unsigned long long numberOfAppLimits;                   //@synthesize numberOfAppLimits=_numberOfAppLimits - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfCategoryLimits; 
@property (assign,nonatomic) unsigned long long numberOfCategoryLimits;              //@synthesize numberOfCategoryLimits=_numberOfCategoryLimits - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumberOfAppLimits:(unsigned long long)arg1 ;
-(void)setHasNumberOfAppLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfAppLimits;
-(void)setNumberOfCategoryLimits:(unsigned long long)arg1 ;
-(void)setHasNumberOfCategoryLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfCategoryLimits;
-(unsigned long long)numberOfAppLimits;
-(unsigned long long)numberOfCategoryLimits;
@end

