/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned)flags;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)encodeWithDictionary:(id)arg1 ;
-(NSArray *)fileItems;
-(void)setFileItems:(NSArray *)arg1 ;
@end

