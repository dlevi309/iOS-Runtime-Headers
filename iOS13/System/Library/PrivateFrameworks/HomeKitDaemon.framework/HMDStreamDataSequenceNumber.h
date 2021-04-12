/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(id)initWithValue:(unsigned long long)arg1 ;
-(id)attributeDescriptions;
-(BOOL)isInitial;
-(id)initWithStreamDataDictionary:(id)arg1 ;
@end

