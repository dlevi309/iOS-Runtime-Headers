/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMotionContextProviderDelegate.h>

@protocol GEOMotionContextProvider, GEOMotionContextDelegate;
@class NSString;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate> {

	id<GEOMotionContextProvider> _provider;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;
	id<GEOMotionContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOMotionContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long motionType;                           //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) unsigned long long exitType;                             //@synthesize exitType=_exitType - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<GEOMotionContextDelegate>)delegate;
-(void)setDelegate:(id<GEOMotionContextDelegate>)arg1 ;
-(BOOL)isRunning;
-(unsigned long long)confidence;
-(void)stopMotionUpdates;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(BOOL)isMoving;
-(unsigned long long)exitType;
-(void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)startMotionUpdatesWithProvider:(id)arg1 ;
-(unsigned long long)motionType;
@end

