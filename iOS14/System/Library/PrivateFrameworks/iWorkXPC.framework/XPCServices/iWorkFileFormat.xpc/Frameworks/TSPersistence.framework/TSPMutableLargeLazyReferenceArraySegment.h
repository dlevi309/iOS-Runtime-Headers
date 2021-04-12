/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArraySegment.h>

@interface TSPMutableLargeLazyReferenceArraySegment : TSPAbstractMutableLargeArraySegment
-(void)saveToMessage:(LargeLazyObjectArraySegment*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeLazyObjectArraySegment*)arg1 unarchiver:(id)arg2 ;
-(unsigned long long)estimatedByteSizeOfElement:(id)arg1 ;
-(void)addReferredObject:(id)arg1 ;
-(id)referredObjectAtIndex:(unsigned long long)arg1 ;
@end

