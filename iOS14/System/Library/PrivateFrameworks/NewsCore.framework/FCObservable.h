/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSMutableArray;

@interface FCObservable : NSObject {

	id _value;
	NSMutableArray* _observers;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
-(NSMutableArray *)observers;
-(id)init;
-(void)next:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)setToken:(unsigned long long)arg1 ;
-(unsigned long long)token;
-(id)observe:(/*^block*/id)arg1 ;
-(void)quietNext:(id)arg1 ;
-(id)value;
-(void)dealloc;
@end

