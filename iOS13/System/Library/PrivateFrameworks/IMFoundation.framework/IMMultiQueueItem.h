/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSString;

@interface IMMultiQueueItem : NSObject {

	id _block;
	NSString* _GUID;
	NSString* _describer;

}

@property (nonatomic,readonly) id block;                                //@synthesize block=_block - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * describer;                    //@synthesize describer=_describer - In the implementation block
-(void)dealloc;
-(id)block;
-(id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3 ;
-(NSString *)GUID;
-(NSString *)describer;
@end

