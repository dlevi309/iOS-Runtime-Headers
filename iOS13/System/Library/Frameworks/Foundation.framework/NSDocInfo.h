/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)setFileAttributes:(id)arg1 ;
-(id)initWithFileAttributes:(id)arg1 ;
-(id)initFromInfo:(stat*)arg1 ;
@end

