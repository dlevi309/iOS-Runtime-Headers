/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)realtimeEventForNewEvent:(id)arg1 harvested:(BOOL)arg2 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 ;
+(id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 ;
+(id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(BOOL)arg3 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 ;
+(id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(SGEvent *)event;
-(NSString *)eventIdentifier;
-(id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(BOOL)arg4 ;
-(BOOL)isEqualToRealtimeEvent:(id)arg1 ;
-(BOOL)isHarvested;
@end

