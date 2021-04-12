/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _source;
	NSString* _calendarIdentifier;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)calendarIdentifier;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)source;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(id)normalize;
-(id)initWithName:(id)arg1 source:(unsigned long long)arg2 calendarIdentifier:(id)arg3 ;
-(id)initWithEvent:(id)arg1 source:(unsigned long long)arg2 useCalendarIdentifier:(BOOL)arg3 ;
-(BOOL)isSuitableForFuzzyMatch;
-(long long)levenshteinDistanceToIdentifier:(id)arg1 ;
@end

