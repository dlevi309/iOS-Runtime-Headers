/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(id<SXActionManager>)actionManager;
-(id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
-(id<SXActionSerializer>)actionSerializer;
-(id)interactionHandlerForAction:(id)arg1 ;
@end

