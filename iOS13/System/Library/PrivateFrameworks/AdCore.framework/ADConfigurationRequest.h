/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(NSData *)iAdID;
-(void)addCurrentConfiguration:(id)arg1 ;
-(unsigned long long)currentConfigurationsCount;
-(void)clearCurrentConfigurations;
-(id)currentConfigurationAtIndex:(unsigned long long)arg1 ;
@end

