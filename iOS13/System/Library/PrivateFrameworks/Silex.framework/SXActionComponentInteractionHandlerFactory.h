/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionComponentInteractionHandlerFactory.h>

@protocol SXActionComponentInteractionHandlerFactory <NSObject>
@required
-(id)interactionHandlerForAction:(id)arg1;

@end


@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;
@class NSString;

@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory> {

	id<SXActionManager> _actionManager;
	id<SXActionSerializer> _actionSerializer;
	id<SXAnalyticsReportingProvider> _analyticsReportingProvider;

}

@property (nonatomic,readonly) id<SXActionManager> actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) id<SXActionSerializer> actionSerializer;                                  //@synthesize actionSerializer=_actionSerializer - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingProvider> analyticsReportingProvider;              //@synthesize analyticsReportingProvider=_analyticsReportingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionManager>)actionManager;
-(id<SXActionSerializer>)actionSerializer;
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(id)interactionHandlerForAction:(id)arg1 ;
-(id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
@end

