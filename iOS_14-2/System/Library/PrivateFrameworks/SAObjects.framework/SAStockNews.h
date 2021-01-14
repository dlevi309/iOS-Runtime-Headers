/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockNews : SADomainObject

@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * url; 
+(id)news;
+(id)newsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)timeStamp;
-(NSString *)url;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)title;
@end

