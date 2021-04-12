/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSString;

@interface CUFileItem : NSObject <CUDictionaryCodable> {

	unsigned _flags;
	int _type;
	NSString* _name;
	long long _size;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(id)description;
-(NSString *)name;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned)flags;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithDictionary:(id)arg1 ;
@end

