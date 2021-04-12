/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
-(NSString *)uniqueKey;
-(id)semanticIdentifier;
-(NSString *)opaqueKey;
-(double)timestamp;
-(id)relatedEvent;
-(id)description;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(unsigned long long)changedFields;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)extractionGroupIdentifier;
-(BOOL)changesAcknowledged;
-(void)setTimestampAsDate:(id)arg1 ;
-(id)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

