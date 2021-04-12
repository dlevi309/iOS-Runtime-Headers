/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SADataSourceInfo, NSNumber, NSString;

@interface SATimerObject : SADomainObject

@property (nonatomic,retain) SADataSourceInfo * dataSourceInfo; 
@property (nonatomic,copy) NSNumber * isFiring; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)isFiring;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setTimerValue:(NSNumber *)arg1 ;
-(SADataSourceInfo *)dataSourceInfo;
-(void)setDataSourceInfo:(SADataSourceInfo *)arg1 ;
-(NSString *)type;
-(void)setState:(NSString *)arg1 ;
-(NSString *)state;
-(void)setIsFiring:(NSNumber *)arg1 ;
-(NSString *)title;
-(NSNumber *)timerValue;
@end

