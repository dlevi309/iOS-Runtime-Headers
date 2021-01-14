/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {

	NSRefCountedRunArray* theList;

}
-(id)init;
-(id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)_makeNewListFrom:(NSRefCountedRunArray*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)initWithRefCountedRunArray:(NSRefCountedRunArray*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 runIndex:(unsigned long long*)arg3 ;
-(void)dealloc;
@end

