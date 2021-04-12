/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTLayoutDynamicContentProtocol.h>

@class TSTTableModel, NSString;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol> {

	TSTTableModel* mTableModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)dynamicContentMustDrawOnMainThread;
-(BOOL)cell:(id*)arg1 forCellID:(SCD_Struct_TS140)arg2 ;
-(id)initWithTableModel:(id)arg1 ;
@end

