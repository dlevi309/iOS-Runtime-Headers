/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGSeekable.h>

@class NSData, NSString;

@interface SGSeekableData : NSObject <SGSeekable> {

	NSData* _data;
	const void* _bytes;
	unsigned long long _length;
	unsigned long long _offsetInFile;

}

@property (readonly) unsigned long long offsetInFile;               //@synthesize offsetInFile=_offsetInFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(const void*)dataOfLength:(unsigned long long)arg1 ;
-(id)initWithMemoryMappedPath:(id)arg1 ;
-(id)initWithMemoryMappedPath:(id)arg1 error:(id*)arg2 ;
@end

