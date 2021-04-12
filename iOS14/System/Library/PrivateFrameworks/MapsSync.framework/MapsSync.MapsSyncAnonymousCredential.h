/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSSet, NSData, NSDate;

@interface MapsSync.MapsSyncAnonymousCredential : MapsSync.MapsSyncBaseItem {

	 _anonymousId;
	 _mapsToken;
	 _mapsTokenTTL;
	 _reviewedPlaces;
	 _reviewedPlacesUnstored;

}

@property (copy,nonatomic) NSSet * _reviewedPlacesUnstored; 
@property (readonly,nonatomic) NSData * anonymousId; 
@property (readonly,nonatomic) NSData * mapsToken; 
@property (readonly,nonatomic) NSDate * mapsTokenCreatedAt; 
@property (readonly,nonatomic) unsigned long long mapsTokenTTL; 
@property (readonly,nonatomic) NSSet * reviewedPlaces; 
+(id)fetchLatestAnonymousCredential;
+(id)fetchWithAnonymousId:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(NSData *)mapsToken;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSData *)anonymousId;
-(NSDate *)mapsTokenCreatedAt;
-(unsigned long long)mapsTokenTTL;
-(NSSet *)_reviewedPlacesUnstored;
-(void)set_reviewedPlacesUnstored:(NSSet *)arg1 ;
-(NSSet *)reviewedPlaces;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

