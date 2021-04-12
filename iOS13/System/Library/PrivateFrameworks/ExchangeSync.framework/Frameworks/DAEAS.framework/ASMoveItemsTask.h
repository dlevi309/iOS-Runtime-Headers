/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask {

	NSArray* _pushedMoveRequests;
	long long _dataclass;
	NSMutableArray* _moveItems;

}

@property (nonatomic,retain) NSMutableArray * moveItems;                //@synthesize moveItems=_moveItems - In the implementation block
@property (nonatomic,retain) NSArray * pushedMoveRequests;              //@synthesize pushedMoveRequests=_pushedMoveRequests - In the implementation block
@property (assign,nonatomic) long long dataclass;                       //@synthesize dataclass=_dataclass - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(NSArray *)pushedMoveRequests;
-(void)setPushedMoveRequests:(NSArray *)arg1 ;
-(void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3 ;
-(NSMutableArray *)moveItems;
-(void)setMoveItems:(NSMutableArray *)arg1 ;
@end

