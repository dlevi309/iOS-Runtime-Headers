/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@class NSDate, ATXMotion;

@interface ATXCachedMotion : NSObject {

	NSDate* lastUpdated;
	ATXMotion* _currentMotion;

}

@property (nonatomic,copy,readonly) ATXMotion * currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
-(void)update:(id)arg1 ;
-(id)initWithATXMotion:(id)arg1 ;
-(ATXMotion *)currentMotion;
-(BOOL)isExpired;
@end

