/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGRealtimeSuggestion.h>

@class SGEvent, NSString;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion> {

	BOOL _isHarvested;
	int _state;
	SGEvent* _event;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) int state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGEvent * event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isHarvested;                        //@synthesize isHarvested=_isHarvested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)realtimeEventForNewEvent:(id)arg1 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(BOOL)arg2 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForNewEvent:(id)arg1 harvested:(BOOL)arg2 ;
-(NSString *)eventIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(SGEvent *)event;
-(id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(BOOL)arg4 ;
-(BOOL)isEqualToRealtimeEvent:(id)arg1 ;
-(BOOL)isHarvested;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

