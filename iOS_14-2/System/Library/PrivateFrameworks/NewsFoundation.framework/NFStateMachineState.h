/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)didEnter:(id)arg1 withOwner:(id)arg2 ;
-(id)willExitBlock;
-(void)setWillExitBlock:(id)arg1 ;
-(BOOL)canTry:(id)arg1 withOwner:(id)arg2 ;
-(void)willEnter:(id)arg1 withOwner:(id)arg2 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)onWillExit:(/*^block*/id)arg1 ;
-(void)setWillEnterBlock:(id)arg1 ;
-(id)willEnterBlock;
-(id)didExit:(id)arg1 withOwner:(id)arg2 ;
-(id)onWillEnter:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)setDidEnterBlock:(id)arg1 ;
-(id)onDidEnter:(/*^block*/id)arg1 ;
-(id)canTryBlock;
-(id)didEnterBlock;
-(void)setDidExitBlock:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)didExitBlock;
-(void)willExit:(id)arg1 withOwner:(id)arg2 ;
-(void)setCanTryBlock:(id)arg1 ;
-(id)onCanTry:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)onDidExit:(/*^block*/id)arg1 ;
@end

