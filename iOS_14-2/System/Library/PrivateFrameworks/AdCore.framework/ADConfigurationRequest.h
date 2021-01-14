/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface ADConfigurationRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentConfigurations;
	NSData* _iAdID;

}

@property (nonatomic,retain) NSMutableArray * currentConfigurations;              //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                      //@synthesize iAdID=_iAdID - In the implementation block
+(id)options;
+(Class)currentConfigurationType;
-(id)dictionaryRepresentation;
-(NSData *)iAdID;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIAdID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)addCurrentConfiguration:(id)arg1 ;
-(unsigned long long)currentConfigurationsCount;
-(void)clearCurrentConfigurations;
-(id)currentConfigurationAtIndex:(unsigned long long)arg1 ;
@end

