/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {

	/*function pointer*/void** _keys;
	int _keysCount;
	int _counter;

}
-(void)dealloc;
-(id)nextObject;
-(id)allObjects;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 ;
@end

