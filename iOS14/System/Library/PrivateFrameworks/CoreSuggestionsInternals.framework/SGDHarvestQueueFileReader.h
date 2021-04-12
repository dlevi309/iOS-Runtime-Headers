/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_io;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGDHarvestQueueFileReader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_io> _io;
	int _fileId;

}

@property (nonatomic,readonly) int fileId;              //@synthesize fileId=_fileId - In the implementation block
-(int)fileId;
-(void)dealloc;
-(void)read:(SCD_Struct_SG21)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithDirectory:(id)arg1 fileId:(int)arg2 tryLater:(BOOL*)arg3 ;
-(void)_performAbstractIo:(/*^block*/id)arg1 chunk:(SCD_Struct_SG21)arg2 withCallback:(/*^block*/id)arg3 ;
@end

