/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	SignalPack* _innerSignalPack;

}
+(BOOL)supportsSecureCoding;
+(id)extractFromDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
+(id)signalPackFromData:(id)arg1 ;
+(id)extractFromDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(BOOL)hasType:(long long)arg1 ;
-(id)encodedFeatureDictionary;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copy;
-(id)data;
-(float)valueForSignalType:(long long)arg1 ;
-(BOOL)mergeIntoSignalPack:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)initWithSignalPack:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

