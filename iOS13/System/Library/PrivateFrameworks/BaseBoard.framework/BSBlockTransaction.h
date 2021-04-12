/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	NSString* _debugName;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)_descriptionProem;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_graphNodeDebugName;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
@end

