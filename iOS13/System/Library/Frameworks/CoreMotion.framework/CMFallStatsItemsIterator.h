/*
* Generated on Monday, March 1, 2021 at 2:31:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration> {

	NSData* _data;
	NSDictionary* _item;
	Reader* fMslReader;
	MemoryDelegate* fMslReaderDelegate;
	ReaderIterator* fMslIterator;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ;
@end

