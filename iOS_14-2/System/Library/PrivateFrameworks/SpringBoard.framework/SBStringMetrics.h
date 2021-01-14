/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {

	NSMutableArray* _fragments;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)fragmentCount;
-(id)description;
-(id)fragments;
-(void)addFragment:(id)arg1 ;
@end

