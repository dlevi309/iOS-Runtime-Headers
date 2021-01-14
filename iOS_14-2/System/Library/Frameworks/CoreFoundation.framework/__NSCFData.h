/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_providesConcreteBacking;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(const void*)bytes;
-(unsigned long long)length;
-(Class)classForCoder;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

