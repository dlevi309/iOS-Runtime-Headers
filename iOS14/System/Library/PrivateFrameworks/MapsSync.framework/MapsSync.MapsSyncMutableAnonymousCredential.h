/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSData, NSDate;

@interface MapsSync.MapsSyncMutableAnonymousCredential : MapsSync.MapsSyncMutableBaseItem {

	 _proxyObject;

}

@property (copy,nonatomic) NSData * anonymousId; 
@property (copy,nonatomic) NSData * mapsToken; 
@property (copy,nonatomic) NSDate * mapsTokenCreatedAt; 
@property (assign,nonatomic) unsigned long long mapsTokenTTL; 
-(void)setMapsToken:(NSData *)arg1 ;
-(NSData *)mapsToken;
-(id)initWithProxyObject:(id)arg1 ;
-(NSData *)anonymousId;
-(void)setAnonymousId:(NSData *)arg1 ;
-(NSDate *)mapsTokenCreatedAt;
-(void)setMapsTokenCreatedAt:(NSDate *)arg1 ;
-(unsigned long long)mapsTokenTTL;
-(void)setMapsTokenTTL:(unsigned long long)arg1 ;
@end

