/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	/*^block*/id _block;
	NSString* _debugName;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(BOOL)_canBeInterrupted;
-(void)setDebugName:(NSString *)arg1 ;
-(void)_begin;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)_graphNodeDebugName;
-(id)_descriptionProem;
-(NSString *)debugName;
@end

