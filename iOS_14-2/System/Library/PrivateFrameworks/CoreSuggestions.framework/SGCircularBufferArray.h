/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SGCircularBufferArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _backingStore;
	unsigned long long _currentIndex;
	unsigned long long _capacity;
	unsigned long long _mutationDetector;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SG15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)allObjects;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

