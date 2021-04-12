/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreFoundation/NSData.h>

@interface _PFVMData : NSData {

	int _cd_rc;
	unsigned long long _length;
	void* _payload;

}
+(Class)classForKeyedUnarchiver;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(Class)classForCoder;
-(unsigned long long)retainCount;
-(void)dealloc;
@end

