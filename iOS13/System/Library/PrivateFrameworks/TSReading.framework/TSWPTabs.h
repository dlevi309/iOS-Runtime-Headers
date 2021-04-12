/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _tabs;

}
+(id)tabs;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS55*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)insertTab:(id)arg1 ;
-(id)tabAtIndex:(unsigned long long)arg1 ;
-(id)initWithTabs:(id)arg1 ;
-(id)tabAtPosition:(double)arg1 ;
-(id)tabAfterPosition:(double)arg1 ;
-(void)removeTabAtIndex:(unsigned long long)arg1 ;
-(void)setPosition:(double)arg1 forTab:(id)arg2 ;
-(unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3 ;
@end

