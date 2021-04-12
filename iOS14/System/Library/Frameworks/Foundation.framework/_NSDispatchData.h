/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSDispatchData : NSData
+(BOOL)supportsSecureCoding;
-(BOOL)_providesConcreteBacking;
-(BOOL)_isDispatchData;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
@end

