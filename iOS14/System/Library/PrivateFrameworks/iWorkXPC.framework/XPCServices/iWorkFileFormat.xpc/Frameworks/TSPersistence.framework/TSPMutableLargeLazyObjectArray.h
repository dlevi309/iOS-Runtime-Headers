/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPAbstractMutableLargeArray.h>

@interface TSPMutableLargeLazyObjectArray : TSPAbstractMutableLargeArray
+(Class)arraySegmentClass;
-(void)saveToMessage:(LargeLazyObjectArray*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const LargeLazyObjectArray*)arg1 unarchiver:(id)arg2 ;
-(id)convertSegmentElementToElement:(id)arg1 ;
-(id)convertElementToSegmentElement:(id)arg1 ;
@end

