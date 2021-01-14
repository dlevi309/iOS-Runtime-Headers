/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface _PFEncodedData : NSData {

	NSData* _aData;
	unsigned _byteCount;
	unsigned _reserved;

}
+(Class)classForKeyedUnarchiver;
-(BOOL)isEqualToData:(id)arg1 ;
-(oneway void)release;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)init;
-(BOOL)_tryRetain;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)mutableCopy;
-(id)retain;
-(BOOL)_isDeallocating;
-(const void*)bytes;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)length;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)retainCount;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
@end

