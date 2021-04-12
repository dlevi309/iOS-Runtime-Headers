/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockRequest : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * requestType; 
@property (nonatomic,copy) NSDate * startDate; 
+(id)request;
+(id)requestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)endDate;
-(void)setRequestType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)requestType;
-(id)encodedClassName;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
@end

