/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isIndirectArgumentBuffer;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(BOOL)isStructLayoutThreadSafeWith:(id)arg1 ;
-(id)members;
-(void)setMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)memberByName:(id)arg1 ;
-(id)description;
-(id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
@end

