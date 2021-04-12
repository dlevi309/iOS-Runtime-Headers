/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SRMemoryMapping, NSString, NSFileHandle;

@interface SRFrameStore : NSObject <NSFastEnumeration> {

	unsigned _datastoreVersion;
	SRMemoryMapping* _frames;
	SRMemoryMapping* _header;
	unsigned long long _permission;
	double _lastAbsoluteTimestamp;
	NSString* _segmentName;
	NSFileHandle* _backingFile;

}

@property (nonatomic,copy) NSString * segmentName;                        //@synthesize segmentName=_segmentName - In the implementation block
@property (retain) NSFileHandle * backingFile;                            //@synthesize backingFile=_backingFile - In the implementation block
@property (nonatomic,readonly) unsigned long long used; 
@property (nonatomic,readonly) unsigned long long freeSpace; 
+(void)initialize;
+(SCD_Struct_SR4)segmentHeaderFromFile:(id)arg1 withVersion:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SR3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)sync;
-(unsigned long long)used;
-(NSString *)segmentName;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)freeSpace;
-(void)updateHeader;
-(id)initWithFileHandle:(id)arg1 maxSize:(unsigned long long)arg2 permission:(unsigned long long)arg3 defaults:(id)arg4 ;
-(BOOL)resizeMappedRegionTo:(unsigned long long)arg1 ;
-(void)writeFrameForBytes:(const void*)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3 ;
-(id)enumerateFromOffset:(unsigned long long)arg1 ;
-(void*)nextFrame:(void*)arg1 ;
-(void)markFrameAsRemoved:(void*)arg1 ;
-(BOOL)resizeBackingFileTo:(unsigned long long)arg1 ;
-(NSFileHandle *)backingFile;
-(void)setBackingFile:(NSFileHandle *)arg1 ;
-(BOOL)isValidFrame:(void*)arg1 ;
-(void*)frameAtOffset:(unsigned long long)arg1 ;
@end

