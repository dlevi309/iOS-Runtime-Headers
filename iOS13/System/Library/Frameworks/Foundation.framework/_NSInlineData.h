/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSInlineData : NSData {

	unsigned short _length;

}
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_createDispatchData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_providesConcreteBacking;
@end

