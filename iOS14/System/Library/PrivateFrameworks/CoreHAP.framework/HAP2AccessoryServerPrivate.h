/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

@class HAP2SerializedOperationQueue, NSString;


@protocol HAP2AccessoryServerPrivate <HAP2AccessoryServer>
@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerBrowserPrivate> browser; 
@property (nonatomic,readonly) id<HAP2AccessoryServerControllerPrivate> controller; 
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue; 
@property (nonatomic,retain) NSString * productData; 
@required
-(HAP2SerializedOperationQueue *)operationQueue;
-(id<HAP2AccessoryServerBrowserPrivate>)browser;
-(id<HAP2AccessoryServerControllerPrivate>)controller;
-(void)setProductData:(id)arg1;
-(NSString *)productData;

@end

