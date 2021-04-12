/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAccessoryProfileItem.h>
#import <libobjc.A.dylib/HFCompoundItemProtocol.h>

@class NSString, NSArray;

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) BOOL isCompoundItem; 
@property (nonatomic,readonly) unsigned long long numberOfCompoundItems; 
@property (nonatomic,readonly) id<HFHomeKitObject> primaryHomeKitObject; 
@property (nonatomic,readonly) NSArray * allHomeKitObjects; 
+(void)getErrorDescription:(out id*)arg1 detailedErrorDescription:(out id*)arg2 forCameraStreamError:(id)arg3 ;
+(BOOL)cameraContainsMotionServiceItem:(id)arg1 ;
-(NSString *)description;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)numberOfCompoundItems;
-(BOOL)isCompoundItem;
-(id<HFHomeKitObject>)primaryHomeKitObject;
@end

