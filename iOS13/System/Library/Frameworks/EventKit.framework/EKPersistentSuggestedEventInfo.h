/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(EKPersistentEvent *)arg1 ;
-(NSDate *)timestamp;
-(EKPersistentEvent *)owner;
-(void)setTimestamp:(NSDate *)arg1 ;
-(int)entityType;
-(NSString *)uniqueKey;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(id)semanticIdentifier;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
@end

