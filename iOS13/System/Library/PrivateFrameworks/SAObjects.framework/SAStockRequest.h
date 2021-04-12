/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(id)encodedClassName;
@end

