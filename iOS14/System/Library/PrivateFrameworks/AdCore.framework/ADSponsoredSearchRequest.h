/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {

	ADUserTargetingProperties* _properties;
	BOOL _enableImagesForDupes;
	BOOL _isBaseline;
	BOOL _isTest;
	SCD_Struct_AD2 _has;

}

@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) ADUserTargetingProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL hasIsTest; 
@property (assign,nonatomic) BOOL isTest;                                         //@synthesize isTest=_isTest - In the implementation block
@property (assign,nonatomic) BOOL hasIsBaseline; 
@property (assign,nonatomic) BOOL isBaseline;                                     //@synthesize isBaseline=_isBaseline - In the implementation block
@property (assign,nonatomic) BOOL hasEnableImagesForDupes; 
@property (assign,nonatomic) BOOL enableImagesForDupes;                           //@synthesize enableImagesForDupes=_enableImagesForDupes - In the implementation block
+(id)options;
-(BOOL)isBaseline;
-(id)dictionaryRepresentation;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)hasIsTest;
-(BOOL)enableImagesForDupes;
-(BOOL)isTest;
-(ADUserTargetingProperties *)properties;
-(void)setIsTest:(BOOL)arg1 ;
-(void)setEnableImagesForDupes:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasProperties;
-(void)setIsBaseline:(BOOL)arg1 ;
-(id)description;
-(void)setHasIsBaseline:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProperties:(ADUserTargetingProperties *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIsBaseline;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasEnableImagesForDupes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasEnableImagesForDupes:(BOOL)arg1 ;
@end

