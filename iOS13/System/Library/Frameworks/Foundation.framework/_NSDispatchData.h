/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSDispatchData : NSData
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)_providesConcreteBacking;
-(id)subdataWithRange:(NSRange)arg1 ;
-(BOOL)_isDispatchData;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
@end

