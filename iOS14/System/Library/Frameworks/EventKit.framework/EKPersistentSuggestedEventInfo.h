/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class EKPersistentEvent, NSString, NSDate;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (assign,nonatomic) EKPersistentEvent * owner; 
@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
+(id)relations;
+(Class)meltedClass;
+(id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(NSString *)uniqueKey;
-(int)entityType;
-(id)semanticIdentifier;
-(EKPersistentEvent *)owner;
-(NSString *)opaqueKey;
-(NSDate *)timestamp;
-(void)setOwner:(EKPersistentEvent *)arg1 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(unsigned long long)changedFields;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)extractionGroupIdentifier;
-(BOOL)changesAcknowledged;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

