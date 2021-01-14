/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSString, GCPhysicalInputProfile;


@protocol GCDevice <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue; 
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
@required
-(NSString *)vendorName;
-(void)setHandlerQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(NSString *)productCategory;
-(GCPhysicalInputProfile *)physicalInputProfile;

@end

