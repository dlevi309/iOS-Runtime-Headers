/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLStructType.h>

@class NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {

	unsigned long long _dataType;
	NSDictionary* _dictionary;
	NSArray* _members;
	BOOL _isIndirectArgumentBuffer;

}

@property (assign) BOOL isIndirectArgumentBuffer;              //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)dataType;
-(id)members;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)isIndirectArgumentBuffer;
-(void)setMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)memberByName:(id)arg1 ;
-(BOOL)isStructLayoutThreadSafeWith:(id)arg1 ;
@end

