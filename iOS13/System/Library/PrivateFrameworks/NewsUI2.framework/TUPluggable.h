/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@protocol TUPluggable
@property (retain,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@required
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id)arg1;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1;
-(void)initializeWithCompletion:(/*^block*/id)arg1;
-(void)relayoutWithCompletion:(/*^block*/id)arg1;

@end

