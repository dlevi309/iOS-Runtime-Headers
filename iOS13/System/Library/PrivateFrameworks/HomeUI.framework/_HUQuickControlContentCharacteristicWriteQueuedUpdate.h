/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol NACancelable;
@class NSMutableSet;

@interface _HUQuickControlContentCharacteristicWriteQueuedUpdate : NSObject {

	id<NACancelable> _cancellationToken;
	NSMutableSet* _affectedCharacteristics;

}

@property (nonatomic,readonly) id<NACancelable> cancellationToken;                  //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,readonly) NSMutableSet * affectedCharacteristics;              //@synthesize affectedCharacteristics=_affectedCharacteristics - In the implementation block
-(id<NACancelable>)cancellationToken;
-(NSMutableSet *)affectedCharacteristics;
-(id)initWithCancellationToken:(id)arg1 ;
@end

