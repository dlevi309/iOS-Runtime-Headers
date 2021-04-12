/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _rangeAndStringVectorVoidPtr;
	BOOL _sorted;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(id)init;
-(unsigned)uniquedStringCount;
-(unsigned)indexForString:(id)arg1 insertIfMissing:(BOOL)arg2 ;
-(void)setString:(id)arg1 forRange:(VMURange)arg2 ;
-(id)stringForAddress:(unsigned long long)arg1 ;
-(VMURange)rangeContainingAddress:(unsigned long long)arg1 ;
-(VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2 ;
-(id)stringForIndex:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)sort;
-(unsigned)count;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

