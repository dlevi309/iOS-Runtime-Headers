/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUserViewRegionInteraction : PBCodable {

	int _viewRegionDesignation;
	int _userViewInteraction;
	SCD_Struct_SI3 _has;

}

@property (assign,nonatomic) int viewRegionDesignation;                  //@synthesize viewRegionDesignation=_viewRegionDesignation - In the implementation block
@property (assign,nonatomic) BOOL hasViewRegionDesignation; 
@property (assign,nonatomic) int userViewInteraction;                    //@synthesize userViewInteraction=_userViewInteraction - In the implementation block
@property (assign,nonatomic) BOOL hasUserViewInteraction; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setViewRegionDesignation:(int)arg1 ;
-(void)setUserViewInteraction:(int)arg1 ;
-(int)viewRegionDesignation;
-(BOOL)hasViewRegionDesignation;
-(void)setHasViewRegionDesignation:(BOOL)arg1 ;
-(int)userViewInteraction;
-(BOOL)hasUserViewInteraction;
-(void)setHasUserViewInteraction:(BOOL)arg1 ;
@end

