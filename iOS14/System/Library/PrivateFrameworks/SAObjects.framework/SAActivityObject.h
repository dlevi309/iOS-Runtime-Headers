/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SAClientUserActivity *)userActivity;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(NSString *)visibility;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setVisibility:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)streamType;
-(void)setStreamType:(NSString *)arg1 ;
-(void)setUserActivity:(SAClientUserActivity *)arg1 ;
-(NSString *)type;
-(NSDictionary *)metadata;
@end

