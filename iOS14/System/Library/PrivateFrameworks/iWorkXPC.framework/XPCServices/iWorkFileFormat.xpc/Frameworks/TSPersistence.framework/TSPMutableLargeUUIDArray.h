/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArray.h>

@interface TSPMutableLargeUUIDArray : TSPAbstractMutableLargeArray
+(Class)arraySegmentClass;
-(void)addUUID:(UUIDData<TSP::UUIDData>)arg1 ;
-(void)saveToMessage:(LargeUUIDArray*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeUUIDArray*)arg1 unarchiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)UUIDAtIndex:(unsigned long long)arg1 ;
-(void)insertUUID:(UUIDData<TSP::UUIDData>)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceUUIDAtIndex:(unsigned long long)arg1 withUUID:(UUIDData<TSP::UUIDData>)arg2 ;
@end

