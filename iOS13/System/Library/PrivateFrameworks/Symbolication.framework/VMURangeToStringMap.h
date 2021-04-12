/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sort;
-(unsigned)uniquedStringCount;
-(unsigned)indexForString:(id)arg1 insertIfMissing:(BOOL)arg2 ;
-(void)setString:(id)arg1 forRange:(VMURange)arg2 ;
-(id)stringForAddress:(unsigned long long)arg1 ;
-(VMURange)rangeContainingAddress:(unsigned long long)arg1 ;
-(VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2 ;
-(id)stringForIndex:(unsigned)arg1 ;
@end

