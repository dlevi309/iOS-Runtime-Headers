/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

@interface TSTTableDataList : TSPObject {

	int mListType;
	unsigned mNextID;
	TSTIntegerKeyDict* mData;
	TSTTableDataObjectKeyDict* mIDs;

}

@property (nonatomic,readonly) unsigned nextID; 
@property (nonatomic,readonly) TSTIntegerKeyDict * data; 
-(void)dealloc;
-(TSTIntegerKeyDict *)data;
-(id)initWithType:(int)arg1 context:(id)arg2 ;
-(unsigned)nextID;
-(id)packageLocator;
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(void)p_setupWithType:(int)arg1 nextKeyID:(unsigned)arg2 ;
-(unsigned long long)flushableSize;
-(id)allRichTextPayloadStorages;
@end

