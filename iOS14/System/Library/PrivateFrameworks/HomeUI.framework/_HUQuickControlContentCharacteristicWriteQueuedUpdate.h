/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)affectedCharacteristics;
-(id<NACancelable>)cancellationToken;
-(id)initWithCancellationToken:(id)arg1 ;
@end

