/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen; 
@property (assign,nonatomic) BOOL hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)numberOfTabsOpen;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setHasNumberOfTabsOpen:(BOOL)arg1 ;
-(BOOL)hasNumberOfTabsOpen;
-(unsigned)currentTabIndex;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(void)setHasCurrentTabIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentTabIndex;
@end

