/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSDictionary, NSOrderedSet, NSString;

@interface AFClockTimerSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _timersByID;
	NSOrderedSet* _notifiedFiringTimerIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long generation;                           //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * timersByID;                          //@synthesize timersByID=_timersByID - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * notifiedFiringTimerIDs;              //@synthesize notifiedFiringTimerIDs=_notifiedFiringTimerIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)ad_shortDescription;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)generation;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mostRecentFiringTimer;
-(NSDictionary *)timersByID;
-(NSString *)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)serializedBackingStore;
-(NSOrderedSet *)notifiedFiringTimerIDs;
-(unsigned long long)hash;
-(id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 timersByID:(id)arg3 notifiedFiringTimerIDs:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSDate *)date;
-(BOOL)hasFiringTimers;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

