/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _nodeToStringIndexMapVoidPtr;

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
-(unsigned)uniquedStringCount;
-(unsigned)_indexForString:(id)arg1 ;
-(void)setString:(id)arg1 forNode:(unsigned)arg2 ;
-(id)stringForNode:(unsigned)arg1 ;
@end

