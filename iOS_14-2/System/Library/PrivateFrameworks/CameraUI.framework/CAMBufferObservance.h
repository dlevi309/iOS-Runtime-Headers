/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFulfilled;
-(id)predicate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(void)setFulfilled:(BOOL)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 removedOnceEnabled:(BOOL)arg2 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(BOOL)isRemovedOnceEnabled;
@end

