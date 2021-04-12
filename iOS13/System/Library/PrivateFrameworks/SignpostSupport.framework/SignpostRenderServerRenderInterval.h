/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval {

	BOOL _hasOffScreenPassCount;
	unsigned _frameSeed;
	unsigned _displayID;
	unsigned _offScreenPassCount;
	int _renderServerPID;
	unsigned long long _displayRefreshIntervalMachContinuousTime;
	NSString* _renderSkipReason;
	unsigned long long _renderServerTID;

}

@property (nonatomic,readonly) unsigned frameSeed;                                                       //@synthesize frameSeed=_frameSeed - In the implementation block
@property (nonatomic,readonly) unsigned long long displayRefreshIntervalMachContinuousTime;              //@synthesize displayRefreshIntervalMachContinuousTime=_displayRefreshIntervalMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned displayID;                                                       //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) BOOL hasOffScreenPassCount;                                               //@synthesize hasOffScreenPassCount=_hasOffScreenPassCount - In the implementation block
@property (nonatomic,readonly) unsigned offScreenPassCount;                                              //@synthesize offScreenPassCount=_offScreenPassCount - In the implementation block
@property (nonatomic,readonly) BOOL didSkipRender; 
@property (nonatomic,readonly) NSString * renderSkipReason;                                              //@synthesize renderSkipReason=_renderSkipReason - In the implementation block
@property (nonatomic,readonly) int renderServerPID;                                                      //@synthesize renderServerPID=_renderServerPID - In the implementation block
@property (nonatomic,readonly) unsigned long long renderServerTID;                                       //@synthesize renderServerTID=_renderServerTID - In the implementation block
-(unsigned)displayID;
-(unsigned)frameSeed;
-(BOOL)didSkipRender;
-(id)initWithRenderServerRenderInterval:(id)arg1 ;
-(NSString *)renderSkipReason;
-(unsigned long long)displayRefreshIntervalMachContinuousTime;
-(BOOL)hasOffScreenPassCount;
-(unsigned)offScreenPassCount;
-(int)renderServerPID;
-(unsigned long long)renderServerTID;
@end

