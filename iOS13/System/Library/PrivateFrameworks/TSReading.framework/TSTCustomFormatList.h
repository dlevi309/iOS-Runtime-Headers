/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(id)init;
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(BOOL)arg2 ;
-(void)p_setupNamesList;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(unsigned)maxKey;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
@end

