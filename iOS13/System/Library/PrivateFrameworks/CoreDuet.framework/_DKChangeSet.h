/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>

@class NSArray, NSUUID, NSDate, NSString;

@interface _DKChangeSet : NSObject <_DKProtobufConverting> {

	NSArray* _eventsToAdd;
	NSArray* _eventIDsToDelete;
	NSUUID* _deviceIdentifier;
	unsigned long long _sequenceNumber;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * eventsToAdd;                          //@synthesize eventsToAdd=_eventsToAdd - In the implementation block
@property (nonatomic,retain) NSArray * eventIDsToDelete;                     //@synthesize eventIDsToDelete=_eventIDsToDelete - In the implementation block
@property (nonatomic,retain) NSUUID * deviceIdentifier;                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
+(id)additionChangeSetEntityName;
+(id)deletionChangeSetEntityName;
+(id)fromPBCodable:(id)arg1 ;
+(id)_createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
+(id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
+(id)createFromData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
+(id)dataFromCompressedChangeSet:(id)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSUUID *)deviceIdentifier;
-(id)initWithEventsToAdd:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithEventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(NSArray *)eventsToAdd;
-(NSArray *)eventIDsToDelete;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 type:(id)arg7 ;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(id)toPBCodable;
-(id)initWithEventsToAdd:(id)arg1 eventIDsToDelete:(id)arg2 deviceIdentifier:(id)arg3 sequenceNumber:(unsigned long long)arg4 ;
-(id)asData;
-(void)setEventsToAdd:(NSArray *)arg1 ;
-(void)setEventIDsToDelete:(NSArray *)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
@end

