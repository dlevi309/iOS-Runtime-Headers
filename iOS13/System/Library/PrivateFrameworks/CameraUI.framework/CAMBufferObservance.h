/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMBufferObservance : NSObject {

	BOOL _removedOnceEnabled;
	BOOL _fulfilled;
	BOOL _enabled;
	/*^block*/id _predicate;

}

@property (assign,getter=isFulfilled,nonatomic) BOOL fulfilled;                                  //@synthesize fulfilled=_fulfilled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (getter=isRemovedOnceEnabled,nonatomic,readonly) BOOL removedOnceEnabled;              //@synthesize removedOnceEnabled=_removedOnceEnabled - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                                //@synthesize predicate=_predicate - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)predicate;
-(BOOL)isEnabled;
-(BOOL)isFulfilled;
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(void)setFulfilled:(BOOL)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 removedOnceEnabled:(BOOL)arg2 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(BOOL)isRemovedOnceEnabled;
@end

