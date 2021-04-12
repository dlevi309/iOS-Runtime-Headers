/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setNumberOfAppLimits:(unsigned long long)arg1 ;
-(void)setHasNumberOfAppLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfAppLimits;
-(void)setNumberOfCategoryLimits:(unsigned long long)arg1 ;
-(void)setHasNumberOfCategoryLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfCategoryLimits;
-(unsigned long long)numberOfAppLimits;
-(unsigned long long)numberOfCategoryLimits;
@end

