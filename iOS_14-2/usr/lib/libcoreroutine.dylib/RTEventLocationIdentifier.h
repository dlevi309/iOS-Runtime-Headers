/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)calendarIdentifier;
-(long long)levenshteinDistanceToIdentifier:(id)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)name;
-(BOOL)isSuitableForFuzzyMatch;
-(id)description;
-(id)normalize;
-(unsigned long long)hash;
-(id)initWithEvent:(id)arg1 source:(unsigned long long)arg2 useCalendarIdentifier:(BOOL)arg3 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 source:(unsigned long long)arg2 calendarIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
@end

