/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (copy,readonly) NSURL * url; 
@property (readonly) const void* mapping; 
+(Class)classForKeyedUnarchiver;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(id)initWithURL:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(Class)classForArchiver;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)getBytes:(void*)arg1 ;
-(NSURL *)url;
-(const void*)mapping;
-(void)_destroyMapping;
-(const void*)_openMapping;
-(void)_closeMapping;
@end

