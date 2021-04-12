/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSignalPack.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAll;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 ;
-(BOOL)addFromEntry:(id)arg1 ;
-(BOOL)addFromMapItem:(id)arg1 ;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4 ;
-(BOOL)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 ;
-(BOOL)removeSignalType:(long long)arg1 ;
@end

