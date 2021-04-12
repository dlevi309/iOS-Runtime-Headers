/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMF/FMFBaseCmd.h>

@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd {

	NSArray* friends;
	NSArray* emails;
	NSString* proximity;
	CLLocation* currentLocation;
	CLLocation* requestedLocation;
	NSString* requestedLocationLabel;
	NSNumber* atRequestedLocation;
	NSString* clientId;

}

@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * requestedLocation; 
@property (nonatomic,copy) NSString * requestedLocationLabel; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSString * clientId; 
-(NSArray *)friends;
-(CLLocation *)currentLocation;
-(void)setClientId:(NSString *)arg1 ;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)path;
-(NSArray *)emails;
-(NSString *)proximity;
-(NSNumber *)atRequestedLocation;
-(void)setFriends:(NSArray *)arg1 ;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(CLLocation *)requestedLocation;
-(void)setRequestedLocation:(CLLocation *)arg1 ;
-(void)setEmails:(NSArray *)arg1 ;
-(NSString *)clientId;
-(id)result;
-(void)setProximity:(NSString *)arg1 ;
-(id)headers;
-(id)jsonBodyDictionary;
-(void)setRequestedLocationLabel:(NSString *)arg1 ;
-(id)allFriendsHandles;
-(id)currentLocationDictionary;
-(id)requestedLocationDictionary;
-(NSString *)requestedLocationLabel;
-(id)friendForHandle:(id)arg1 ;
@end

