/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * removedFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alarmModification;
+(id)alarmModificationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)hour;
-(NSNumber *)enabled;
-(void)setHour:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)minute;
-(id)encodedClassName;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSURL *)alarmId;
-(void)setAlarmId:(NSURL *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSArray *)addedFrequency;
-(void)setAddedFrequency:(NSArray *)arg1 ;
-(NSArray *)removedFrequency;
-(void)setRemovedFrequency:(NSArray *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

