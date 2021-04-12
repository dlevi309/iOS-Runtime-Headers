/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSDocInfo : NSObject <NSCopying> {

	long long time;
	unsigned short mode;
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	}  flags;

}
-(id)copy;
-(id)initFromInfo:(stat*)arg1 ;
-(void)setFileAttributes:(id)arg1 ;
-(id)initWithFileAttributes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

