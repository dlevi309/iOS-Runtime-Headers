/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol VMUStackLogReader;
@class NSMutableArray;

@interface VMUVMRegionTracker : NSObject <NSSecureCoding> {

	unsigned _task;
	id<VMUStackLogReader> _stackLogReader;
	NSMutableArray* _regionInfoArray;

}

@property (readonly) long long regionCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)regionCount;
-(id)vmRegionRangeInfoForRange:(VMURange)arg1 ;
-(unsigned long long)handleStackLogType:(unsigned)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4 ;
-(unsigned long long)_regionIndexForAddress:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 stackLogReader:(id)arg2 ;
-(void)convertStackIDs:(/*^block*/id)arg1 ;
@end

