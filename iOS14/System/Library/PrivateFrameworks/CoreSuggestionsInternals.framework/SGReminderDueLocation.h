/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString;

@interface SGReminderDueLocation : NSObject {

	unsigned char _locationType;
	unsigned char _trigger;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char locationType;              //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) unsigned char trigger;                   //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)mergeDueLocations:(id)arg1 ;
-(unsigned char)trigger;
-(NSString *)name;
-(id)description;
-(unsigned char)locationType;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocationType:(unsigned char)arg1 trigger:(unsigned char)arg2 name:(id)arg3 ;
-(BOOL)isEqualToReminderDueLocation:(id)arg1 ;
@end

