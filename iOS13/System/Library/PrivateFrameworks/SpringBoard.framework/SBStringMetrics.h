/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {

	NSMutableArray* _fragments;

}
-(id)init;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)fragmentCount;
-(id)fragments;
-(void)addFragment:(id)arg1 ;
@end

