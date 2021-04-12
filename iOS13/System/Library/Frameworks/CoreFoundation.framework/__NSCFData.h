/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface __NSCFData : NSMutableData {

	unsigned long long _cfinfoa;
	long long _length;
	long long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(const void*)bytes;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(BOOL)_providesConcreteBacking;
@end

