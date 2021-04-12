/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
@end

