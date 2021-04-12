/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSArray, NSString;

@interface SAFmfSearch : SADomainCommand

@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)proximity;
-(SALocation *)currentLocation;
-(void)setCurrentLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(void)setProximity:(NSString *)arg1 ;
-(NSArray *)friends;
-(BOOL)requiresResponse;
-(void)setFriends:(NSArray *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
@end

