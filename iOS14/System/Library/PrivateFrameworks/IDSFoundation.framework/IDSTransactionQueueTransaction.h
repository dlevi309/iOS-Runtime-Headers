/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@interface IDSTransactionQueueTransaction : NSObject {

	BOOL _readyToExecute;
	id _item;

}

@property (assign,nonatomic) BOOL readyToExecute;              //@synthesize readyToExecute=_readyToExecute - In the implementation block
@property (nonatomic,retain) id item;                          //@synthesize item=_item - In the implementation block
-(id)item;
-(void)setItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 readyToExecute:(BOOL)arg2 ;
-(BOOL)readyToExecute;
-(void)setReadyToExecute:(BOOL)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end

