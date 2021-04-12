/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
-(id)nextObject;
-(void)_setKey:(id)arg1 ;
-(void)_setMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5 ;
-(void)_setKeySpace:(id)arg1 ;
-(void)_setArrayEnumerator:(id)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(void)dealloc;
@end

