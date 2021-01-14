/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(long long)size;
-(unsigned)flags;
-(void)setSize:(long long)arg1 ;
-(void)encodeWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(int)type;
-(void)setName:(NSString *)arg1 ;
@end

