/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {

	NSRefCountedRunArray* theList;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 runIndex:(unsigned long long*)arg3 ;
-(id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithRefCountedRunArray:(NSRefCountedRunArray*)arg1 ;
-(void)_makeNewListFrom:(NSRefCountedRunArray*)arg1 ;
@end

