/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate, _ATXMotion;

@interface _ATXCachedMotion : NSObject {

	NSDate* lastUpdated;
	_ATXMotion* _currentMotion;

}

@property (nonatomic,copy,readonly) _ATXMotion * currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
-(BOOL)isExpired;
-(void)update:(id)arg1 ;
-(_ATXMotion *)currentMotion;
-(id)initWithATXMotion:(id)arg1 ;
@end

