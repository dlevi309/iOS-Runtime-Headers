/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(id)init;
-(void)setTargetType:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(id)actionDetails;
-(void)setActionDetails:(id)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(NSString *)targetURL;
@end

