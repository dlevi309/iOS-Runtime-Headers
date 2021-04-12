/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@interface CARScreenViewArea : NSObject {

	BOOL _displaysTransitionControl;
	CGRect _visibleFrame;
	CGRect _safeFrame;

}

@property (nonatomic,readonly) CGRect visibleFrame;                         //@synthesize visibleFrame=_visibleFrame - In the implementation block
@property (nonatomic,readonly) CGRect safeFrame;                            //@synthesize safeFrame=_safeFrame - In the implementation block
@property (nonatomic,readonly) BOOL displaysTransitionControl;              //@synthesize displaysTransitionControl=_displaysTransitionControl - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CGRect)visibleFrame;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 additionalInsets:(NSEdgeInsets)arg2 ;
-(CGRect)safeFrame;
-(BOOL)displaysTransitionControl;
-(BOOL)isEqualToViewArea:(id)arg1 ;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 ;
@end

