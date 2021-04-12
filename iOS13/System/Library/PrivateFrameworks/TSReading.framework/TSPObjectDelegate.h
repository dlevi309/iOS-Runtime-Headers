/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate <TSPObjectModifyDelegate>
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(TSPObjectContext *)context;
-(long long)modifyObjectTokenForNewObject;
-(long long)newObjectIdentifier;

@end

