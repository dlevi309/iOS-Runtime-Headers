/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSString, NSNumber;


@protocol GCControllerProductInfo <GCControllerComponent>
@property (copy,readonly) NSString * productCategory; 
@property (copy,readonly) NSString * detailedProductCategory; 
@property (copy,readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,copy,readonly) NSNumber * attachedToDevice; 
@required
-(NSString *)vendorName;
-(NSString *)productCategory;
-(NSString *)detailedProductCategory;
-(id)isAttachedToDevice;

@end

