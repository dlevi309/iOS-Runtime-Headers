/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(BOOL)scrubsLinearly;
-(BOOL)shouldLayoutSubviews;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)optimizationsEnabled;
-(BOOL)userInteractionEnabled;
-(BOOL)startPaused;
-(void)setStartPaused:(BOOL)arg1 ;
-(void)setOptimizationsEnabled:(BOOL)arg1 ;
-(void)setShouldLayoutSubviews:(BOOL)arg1 ;
@end

