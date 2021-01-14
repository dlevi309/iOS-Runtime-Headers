/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying> {

	unsigned long long _value;

}

@property (readonly) unsigned long long value;                   //@synthesize value=_value - In the implementation block
@property (getter=isInitial,readonly) BOOL initial; 
-(id)initWithValue:(unsigned long long)arg1 ;
-(BOOL)isInitial;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStreamDataDictionary:(id)arg1 ;
@end

