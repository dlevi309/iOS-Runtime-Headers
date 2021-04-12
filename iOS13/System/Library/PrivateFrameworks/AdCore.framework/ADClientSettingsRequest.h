/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCurrentSettingParams:(id)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(unsigned long long)currentSettingParamsCount;
-(void)clearCurrentSettingParams;
-(id)currentSettingParamsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIAdIDString;
-(NSString *)iAdIDString;
-(NSMutableArray *)currentSettingParams;
-(void)setCurrentSettingParams:(NSMutableArray *)arg1 ;
@end

