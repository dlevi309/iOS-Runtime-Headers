/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTMediaActivityEventHandler;

@interface MTPAFEventHandlers : MTEventHandlers

@property (nonatomic,readonly) MTMediaActivityEventHandler * playStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * playStop; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStart; 
@property (nonatomic,readonly) MTMediaActivityEventHandler * seekStop; 
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(MTMediaActivityEventHandler *)seekStart;
-(MTMediaActivityEventHandler *)seekStop;
-(MTMediaActivityEventHandler *)playStart;
-(MTMediaActivityEventHandler *)playStop;
@end

