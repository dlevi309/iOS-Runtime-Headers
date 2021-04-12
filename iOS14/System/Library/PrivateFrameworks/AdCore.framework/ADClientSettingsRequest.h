/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentSettingParams;
	NSString* _iAdIDString;

}

@property (nonatomic,readonly) BOOL hasIAdIDString; 
@property (nonatomic,retain) NSString * iAdIDString;                             //@synthesize iAdIDString=_iAdIDString - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSettingParams;              //@synthesize currentSettingParams=_currentSettingParams - In the implementation block
+(id)options;
+(Class)currentSettingParamsType;
-(id)dictionaryRepresentation;
-(void)setIAdIDString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasIAdIDString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)iAdIDString;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCurrentSettingParams:(id)arg1 ;
-(unsigned long long)currentSettingParamsCount;
-(void)clearCurrentSettingParams;
-(id)currentSettingParamsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)currentSettingParams;
-(void)setCurrentSettingParams:(NSMutableArray *)arg1 ;
@end

