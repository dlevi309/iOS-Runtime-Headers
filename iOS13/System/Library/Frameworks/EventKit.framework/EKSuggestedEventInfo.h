/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
+(Class)frozenClass;
-(id)description;
-(id)copy;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)uniqueKey;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(id)semanticIdentifier;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(void)setTimestampAsDate:(id)arg1 ;
-(id)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)relatedEvent;
@end

