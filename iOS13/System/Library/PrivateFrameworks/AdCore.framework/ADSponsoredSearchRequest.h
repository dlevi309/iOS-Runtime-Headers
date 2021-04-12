/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(ADUserTargetingProperties *)properties;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProperties:(ADUserTargetingProperties *)arg1 ;
-(BOOL)hasProperties;
-(BOOL)isTest;
-(void)setIsTest:(BOOL)arg1 ;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)hasIsTest;
-(void)setIsBaseline:(BOOL)arg1 ;
-(void)setHasIsBaseline:(BOOL)arg1 ;
-(BOOL)hasIsBaseline;
-(void)setEnableImagesForDupes:(BOOL)arg1 ;
-(void)setHasEnableImagesForDupes:(BOOL)arg1 ;
-(BOOL)hasEnableImagesForDupes;
-(BOOL)isBaseline;
-(BOOL)enableImagesForDupes;
@end

