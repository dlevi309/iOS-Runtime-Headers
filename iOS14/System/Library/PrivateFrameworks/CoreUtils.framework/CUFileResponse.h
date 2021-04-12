/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable> {

	unsigned _flags;
	NSArray* _fileItems;

}

@property (nonatomic,copy) NSArray * fileItems;              //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) unsigned flags;                 //@synthesize flags=_flags - In the implementation block
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned)flags;
-(void)encodeWithDictionary:(id)arg1 ;
-(void)setFileItems:(NSArray *)arg1 ;
-(id)description;
-(void)setFlags:(unsigned)arg1 ;
-(NSArray *)fileItems;
@end

