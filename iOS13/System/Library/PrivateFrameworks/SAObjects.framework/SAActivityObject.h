/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSDictionary, NSString, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) SAClientUserActivity * userActivity; 
@property (nonatomic,copy) NSString * visibility; 
+(id)activityObject;
+(id)activityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)visibility;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(SAClientUserActivity *)userActivity;
-(void)setUserActivity:(SAClientUserActivity *)arg1 ;
-(id)encodedClassName;
-(void)setStreamType:(NSString *)arg1 ;
-(NSString *)streamType;
@end

