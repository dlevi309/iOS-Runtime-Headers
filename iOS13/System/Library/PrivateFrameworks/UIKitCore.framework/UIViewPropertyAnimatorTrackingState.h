/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSUUID;

@interface UIViewPropertyAnimatorTrackingState : NSObject {

	BOOL _startPaused;
	BOOL _scrubsLinearly;
	BOOL _userInteractionEnabled;
	BOOL _optimizationsEnabled;
	BOOL _shouldLayoutSubviews;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL startPaused;                         //@synthesize startPaused=_startPaused - In the implementation block
@property (assign,nonatomic) BOOL scrubsLinearly;                      //@synthesize scrubsLinearly=_scrubsLinearly - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL optimizationsEnabled;                //@synthesize optimizationsEnabled=_optimizationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutSubviews;                //@synthesize shouldLayoutSubviews=_shouldLayoutSubviews - In the implementation block
-(id)init;
-(NSUUID *)uuid;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)startPaused;
-(void)setStartPaused:(BOOL)arg1 ;
-(BOOL)scrubsLinearly;
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(BOOL)userInteractionEnabled;
-(BOOL)optimizationsEnabled;
-(void)setOptimizationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldLayoutSubviews;
-(void)setShouldLayoutSubviews:(BOOL)arg1 ;
@end

