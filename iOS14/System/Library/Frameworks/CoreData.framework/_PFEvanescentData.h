/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSURL;

@interface _PFEvanescentData : NSData {

	unsigned long long _length;
	NSURL* _fileURL;
	int _openfd;
	const void* _activeMap;
	int _mapRefCount;

}
+(Class)classForKeyedUnarchiver;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)description;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)hash;
-(void)invalidate;
-(void)getBytes:(void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

