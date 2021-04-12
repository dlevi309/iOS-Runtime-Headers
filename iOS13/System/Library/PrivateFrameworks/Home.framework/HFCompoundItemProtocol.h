/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class NSArray;


@protocol HFCompoundItemProtocol <HFHomeKitItemProtocol>
@property (nonatomic,readonly) BOOL isCompoundItem; 
@property (nonatomic,readonly) unsigned long long numberOfCompoundItems; 
@property (nonatomic,readonly) id<HFHomeKitObject> primaryHomeKitObject; 
@property (nonatomic,readonly) NSArray * allHomeKitObjects; 
@optional
-(NSArray *)allHomeKitObjects;

@required
-(unsigned long long)numberOfCompoundItems;
-(BOOL)isCompoundItem;
-(id<HFHomeKitObject>)primaryHomeKitObject;

@end

