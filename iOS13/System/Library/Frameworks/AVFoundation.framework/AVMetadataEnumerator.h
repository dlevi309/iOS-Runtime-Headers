/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {

	OpaqueFigMetadataReaderRef _reader;
	NSEnumerator* _arrayEnumerator;
	id _key;
	NSString* _keySpace;
	NSLocale* _locale;
	long long _count;
	long long _index;

}
+(id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
+(id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(void)dealloc;
-(id)nextObject;
-(void)_setKey:(id)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5 ;
-(void)_setMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(void)_setArrayEnumerator:(id)arg1 ;
-(void)_setKeySpace:(id)arg1 ;
@end

