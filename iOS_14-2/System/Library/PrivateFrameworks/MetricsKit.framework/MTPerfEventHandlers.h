/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEventHandlers.h>

@class MTFlexiblePerfEventHandler, MTPageRenderEventHandler, MTLoadUrlEventHandler;

@interface MTPerfEventHandlers : MTEventHandlers {

	MTFlexiblePerfEventHandler* _flexible;

}

@property (nonatomic,readonly) MTPageRenderEventHandler * pageRender; 
@property (nonatomic,readonly) MTLoadUrlEventHandler * loadUrl; 
@property (nonatomic,readonly) MTFlexiblePerfEventHandler * flexible;              //@synthesize flexible=_flexible - In the implementation block
-(MTLoadUrlEventHandler *)loadUrl;
-(MTFlexiblePerfEventHandler *)flexible;
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(MTPageRenderEventHandler *)pageRender;
@end

