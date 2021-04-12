/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMCategoryLimitUsageChange : PBCodable <NSCopying> {

	long long _changeInUsage;
	unsigned long long _daysSinceCreationDate;
	NSString* _limitType;
	NSString* _limitedCategory;
	BOOL _noCreationDate;
	SCD_Struct_RM1 _has;

}

@property (nonatomic,readonly) BOOL hasLimitedCategory; 
@property (nonatomic,retain) NSString * limitedCategory;                            //@synthesize limitedCategory=_limitedCategory - In the implementation block
@property (assign,nonatomic) BOOL hasDaysSinceCreationDate; 
@property (assign,nonatomic) unsigned long long daysSinceCreationDate;              //@synthesize daysSinceCreationDate=_daysSinceCreationDate - In the implementation block
@property (assign,nonatomic) BOOL hasChangeInUsage; 
@property (assign,nonatomic) long long changeInUsage;                               //@synthesize changeInUsage=_changeInUsage - In the implementation block
@property (nonatomic,readonly) BOOL hasLimitType; 
@property (nonatomic,retain) NSString * limitType;                                  //@synthesize limitType=_limitType - In the implementation block
@property (assign,nonatomic) BOOL hasNoCreationDate; 
@property (assign,nonatomic) BOOL noCreationDate;                                   //@synthesize noCreationDate=_noCreationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLimitedCategory:(NSString *)arg1 ;
-(void)setLimitType:(NSString *)arg1 ;
-(BOOL)hasLimitedCategory;
-(void)setDaysSinceCreationDate:(unsigned long long)arg1 ;
-(void)setHasDaysSinceCreationDate:(BOOL)arg1 ;
-(BOOL)hasDaysSinceCreationDate;
-(void)setChangeInUsage:(long long)arg1 ;
-(void)setHasChangeInUsage:(BOOL)arg1 ;
-(BOOL)hasChangeInUsage;
-(BOOL)hasLimitType;
-(void)setNoCreationDate:(BOOL)arg1 ;
-(void)setHasNoCreationDate:(BOOL)arg1 ;
-(BOOL)hasNoCreationDate;
-(NSString *)limitedCategory;
-(unsigned long long)daysSinceCreationDate;
-(long long)changeInUsage;
-(NSString *)limitType;
-(BOOL)noCreationDate;
@end

