/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTCell : NSObject <NSCopying> {

	SCD_Struct_TS173* mPrivate;

}
+(id)cell;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(id)initWithStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(BOOL)isCellContentsEqualToCell:(id)arg1 ;
-(void)writeToStorageRef:(TSTCellStorage*)arg1 ;
@end

