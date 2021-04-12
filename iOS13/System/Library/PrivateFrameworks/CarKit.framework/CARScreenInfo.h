/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@class NSString, NSArray, CARScreenViewArea, NSURL;

@interface CARScreenInfo : NSObject {

	BOOL _limitedUI;
	BOOL _nightMode;
	BOOL _supportsHighFidelityTouch;
	NSString* _identifier;
	unsigned long long _screenType;
	unsigned long long _limitedUIElements;
	unsigned long long _maxFramesPerSecond;
	NSArray* _viewAreas;
	CARScreenViewArea* _currentViewArea;
	CARScreenViewArea* _adjacentViewArea;
	unsigned long long _currentViewAreaTransitionControlType;
	NSURL* _initialURL;
	unsigned long long _systemAvailableInteractionModels;
	unsigned long long _systemPrimaryInteractionModel;
	CGSize _physicalSize;
	CGSize _pixelSize;

}

@property (assign,nonatomic) unsigned long long systemAvailableInteractionModels;                  //@synthesize systemAvailableInteractionModels=_systemAvailableInteractionModels - In the implementation block
@property (assign,nonatomic) unsigned long long systemPrimaryInteractionModel;                     //@synthesize systemPrimaryInteractionModel=_systemPrimaryInteractionModel - In the implementation block
@property (assign,nonatomic) unsigned long long currentViewAreaTransitionControlType;              //@synthesize currentViewAreaTransitionControlType=_currentViewAreaTransitionControlType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long screenType;                                      //@synthesize screenType=_screenType - In the implementation block
@property (getter=isLimitedUI,nonatomic,readonly) BOOL limitedUI;                                  //@synthesize limitedUI=_limitedUI - In the implementation block
@property (nonatomic,readonly) unsigned long long limitedUIElements;                               //@synthesize limitedUIElements=_limitedUIElements - In the implementation block
@property (getter=isNightMode,nonatomic,readonly) BOOL nightMode;                                  //@synthesize nightMode=_nightMode - In the implementation block
@property (nonatomic,readonly) unsigned long long availableInteractionModels; 
@property (nonatomic,readonly) unsigned long long primaryInteractionModel; 
@property (nonatomic,readonly) BOOL supportsHighFidelityTouch;                                     //@synthesize supportsHighFidelityTouch=_supportsHighFidelityTouch - In the implementation block
@property (nonatomic,readonly) unsigned long long maxFramesPerSecond;                              //@synthesize maxFramesPerSecond=_maxFramesPerSecond - In the implementation block
@property (nonatomic,readonly) CGSize physicalSize;                                                //@synthesize physicalSize=_physicalSize - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                                   //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * viewAreas;                                           //@synthesize viewAreas=_viewAreas - In the implementation block
@property (nonatomic,retain) CARScreenViewArea * currentViewArea;                                  //@synthesize currentViewArea=_currentViewArea - In the implementation block
@property (nonatomic,retain) CARScreenViewArea * adjacentViewArea;                                 //@synthesize adjacentViewArea=_adjacentViewArea - In the implementation block
@property (nonatomic,readonly) NSURL * initialURL;                                                 //@synthesize initialURL=_initialURL - In the implementation block
-(id)description;
-(NSString *)identifier;
-(unsigned long long)primaryInteractionModel;
-(CGSize)physicalSize;
-(CGSize)pixelSize;
-(unsigned long long)availableInteractionModels;
-(BOOL)supportsHighFidelityTouch;
-(unsigned long long)screenType;
-(NSURL *)initialURL;
-(unsigned long long)limitedUIElements;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 screenType:(unsigned long long)arg2 additionalInsets:(NSEdgeInsets)arg3 ;
-(unsigned long long)systemAvailableInteractionModels;
-(id)_descriptionForInteractionModel:(unsigned long long)arg1 ;
-(unsigned long long)systemPrimaryInteractionModel;
-(BOOL)_currentProcessHasEntitlement;
-(id)descriptionForAvailableInteractionModels;
-(id)descriptionForPrimaryInteractionModel;
-(BOOL)isLimitedUI;
-(BOOL)isNightMode;
-(unsigned long long)maxFramesPerSecond;
-(NSArray *)viewAreas;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 screenType:(unsigned long long)arg2 ;
-(void)nightModeChanged:(BOOL)arg1 ;
-(void)limitedUIChanged:(BOOL)arg1 ;
-(CARScreenViewArea *)currentViewArea;
-(void)setCurrentViewArea:(CARScreenViewArea *)arg1 ;
-(CARScreenViewArea *)adjacentViewArea;
-(void)setAdjacentViewArea:(CARScreenViewArea *)arg1 ;
-(unsigned long long)currentViewAreaTransitionControlType;
-(void)setCurrentViewAreaTransitionControlType:(unsigned long long)arg1 ;
-(void)setSystemAvailableInteractionModels:(unsigned long long)arg1 ;
-(void)setSystemPrimaryInteractionModel:(unsigned long long)arg1 ;
@end

