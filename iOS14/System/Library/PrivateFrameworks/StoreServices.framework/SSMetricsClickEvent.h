/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString, NSNumber;

@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id impressions; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSNumber * positionX; 
@property (nonatomic,retain) NSNumber * positionY; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)init;
-(id)impressions;
-(void)setTargetType:(NSString *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)actionDetails;
-(NSString *)locationDescription;
-(void)setActionDetails:(id)arg1 ;
-(void)setLocationDescription:(NSString *)arg1 ;
-(void)setPositionX:(NSNumber *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setPositionY:(NSNumber *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(NSString *)targetURL;
-(NSNumber *)positionX;
-(NSNumber *)positionY;
-(void)setImpressions:(id)arg1 ;
@end

