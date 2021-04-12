/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)url;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(id)encodedClassName;
@end

