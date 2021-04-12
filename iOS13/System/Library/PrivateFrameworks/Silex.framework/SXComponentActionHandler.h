/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXAnalyticsEvent.h>
#import <libobjc.A.dylib/SXPostActionHandler.h>
#import <libobjc.A.dylib/SXComponentActionHandler.h>

@protocol SXComponentActionHandler <NSObject>
@required
-(void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 invocationType:(unsigned long long)arg4;

@end


@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;
@class NSString;

@interface SXComponentActionHandler : SXAnalyticsEvent <SXPostActionHandler, SXComponentActionHandler> {

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
-(void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 invocationType:(unsigned long long)arg4 ;
-(id<SXActionSerializer>)actionSerializer;
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
@end

