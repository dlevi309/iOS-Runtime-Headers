/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMF/FMFBaseCmd.h>

@class NSString, SALocation, SAPerson;

@interface SetGeoFenceCmd : FMFBaseCmd {

	BOOL enable;
	BOOL onetimeonly;
	NSString* trigger;
	SALocation* location;
	SAPerson* saPerson;
	NSString* fenceType;

}

@property (assign,nonatomic) BOOL enable; 
@property (assign,nonatomic) BOOL onetimeonly; 
@property (nonatomic,copy) NSString * trigger; 
@property (nonatomic,copy) SALocation * location; 
@property (nonatomic,retain) SAPerson * saPerson; 
@property (nonatomic,copy) NSString * fenceType; 
+(id)bundle;
-(BOOL)enable;
-(NSString *)trigger;
-(SALocation *)location;
-(void)setTrigger:(NSString *)arg1 ;
-(id)path;
-(void)setLocation:(SALocation *)arg1 ;
-(id)allHandles;
-(id)result;
-(NSString *)fenceType;
-(id)addressString;
-(void)setFenceType:(NSString *)arg1 ;
-(void)setEnable:(BOOL)arg1 ;
-(id)jsonBodyDictionary;
-(void)setSaPerson:(SAPerson *)arg1 ;
-(void)setOnetimeonly:(BOOL)arg1 ;
-(id)requestedLocationDictionary;
-(id)fullAddressDictionaryForSALocation:(id)arg1 ;
-(SAPerson *)saPerson;
-(id)postalAddressWithSALocation:(id)arg1 ;
-(BOOL)onetimeonly;
@end

