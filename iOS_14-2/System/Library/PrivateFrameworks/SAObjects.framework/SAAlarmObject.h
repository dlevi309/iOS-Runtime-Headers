/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SADataSourceInfo, NSNumber, NSArray, NSString;

@interface SAAlarmObject : SADomainObject

@property (nonatomic,retain) SADataSourceInfo * dataSourceInfo; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * firing; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSNumber * relativeOffsetMinutes; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)hour;
-(void)setFrequency:(NSArray *)arg1 ;
-(NSNumber *)enabled;
-(NSArray *)frequency;
-(void)setHour:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setFiring:(NSNumber *)arg1 ;
-(NSNumber *)firing;
-(NSNumber *)minute;
-(id)encodedClassName;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(SADataSourceInfo *)dataSourceInfo;
-(void)setDataSourceInfo:(SADataSourceInfo *)arg1 ;
-(NSNumber *)relativeOffsetMinutes;
-(void)setRelativeOffsetMinutes:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

