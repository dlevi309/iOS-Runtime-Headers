/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject {

	unsigned _slotId;
	CAContext* _context;

}

@property (nonatomic,readonly) unsigned slotId;                  //@synthesize slotId=_slotId - In the implementation block
@property (nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(CAContext *)context;
-(unsigned)slotId;
-(void)dealloc;
-(id)initWithContext:(id)arg1 slotId:(unsigned)arg2 ;
@end

