/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(id<SXActionManager>)actionManager;
-(id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(id<SXActionSerializer>)actionSerializer;
-(void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 invocationType:(unsigned long long)arg4 ;
@end

