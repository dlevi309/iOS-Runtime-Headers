/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CAContext *)context;
-(unsigned)slotId;
-(id)initWithContext:(id)arg1 slotId:(unsigned)arg2 ;
@end

