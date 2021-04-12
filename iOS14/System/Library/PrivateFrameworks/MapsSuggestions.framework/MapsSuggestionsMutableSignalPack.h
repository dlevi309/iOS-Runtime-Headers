/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSignalPack.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)removeSignalType:(long long)arg1 ;
-(id)copy;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 ;
-(BOOL)addFromMapItem:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4 ;
-(BOOL)addFromEntry:(id)arg1 ;
-(void)removeAll;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 ;
@end

