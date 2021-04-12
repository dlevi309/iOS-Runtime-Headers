/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSString;

@interface NFStateMachineState : NSObject {

	NSString* _name;
	/*^block*/id _canTryBlock;
	/*^block*/id _willExitBlock;
	/*^block*/id _willEnterBlock;
	/*^block*/id _didExitBlock;
	/*^block*/id _didEnterBlock;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id canTryBlock;                 //@synthesize canTryBlock=_canTryBlock - In the implementation block
@property (nonatomic,copy) id willExitBlock;               //@synthesize willExitBlock=_willExitBlock - In the implementation block
@property (nonatomic,copy) id willEnterBlock;              //@synthesize willEnterBlock=_willEnterBlock - In the implementation block
@property (nonatomic,copy) id didExitBlock;                //@synthesize didExitBlock=_didExitBlock - In the implementation block
@property (nonatomic,copy) id didEnterBlock;               //@synthesize didEnterBlock=_didEnterBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)canTry:(id)arg1 withOwner:(id)arg2 ;
-(void)willExit:(id)arg1 withOwner:(id)arg2 ;
-(void)willEnter:(id)arg1 withOwner:(id)arg2 ;
-(id)didExit:(id)arg1 withOwner:(id)arg2 ;
-(id)didEnter:(id)arg1 withOwner:(id)arg2 ;
-(void)setCanTryBlock:(id)arg1 ;
-(void)setWillExitBlock:(id)arg1 ;
-(void)setDidExitBlock:(id)arg1 ;
-(void)setWillEnterBlock:(id)arg1 ;
-(void)setDidEnterBlock:(id)arg1 ;
-(id)onCanTry:(/*^block*/id)arg1 ;
-(id)onWillExit:(/*^block*/id)arg1 ;
-(id)onDidExit:(/*^block*/id)arg1 ;
-(id)onWillEnter:(/*^block*/id)arg1 ;
-(id)onDidEnter:(/*^block*/id)arg1 ;
-(id)canTryBlock;
-(id)willExitBlock;
-(id)willEnterBlock;
-(id)didExitBlock;
-(id)didEnterBlock;
@end

