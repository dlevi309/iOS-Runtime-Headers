/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

@class ASKClient, _TtC11AppStoreKit20JSStoreMetricsObject, NSDictionary, _TtC11AppStoreKit12JSUserObject, _TtC11AppStoreKit21ClientOrderingWrapper, _TtC11AppStoreKit28JSPersonalizationStoreObject, _TtC11AppStoreKit20JSResilientDeepLinks, _TtC11AppStoreKit14JSArcadeObject, _TtC11AppStoreKit12JSGameCenter, _TtC11AppStoreKit12AppleSilicon;


@protocol AppStoreKit.ASKGlobalExports <JSExport>
@property (readonly,nonatomic) ASKClient * client; 
@property (readonly,nonatomic) id<_TtP11AppStoreKit20LocalizationProtocol_> loc; 
@property (readonly,nonatomic) _TtC11AppStoreKit20JSStoreMetricsObject * storeMetrics; 
@property (readonly,nonatomic) NSDictionary * props; 
@property (readonly,nonatomic) _TtC11AppStoreKit12JSUserObject * user; 
@property (readonly,nonatomic) _TtC11AppStoreKit21ClientOrderingWrapper * clientOrdering; 
@property (readonly,nonatomic) _TtC11AppStoreKit28JSPersonalizationStoreObject * personalizationStore; 
@property (readonly,nonatomic) _TtC11AppStoreKit20JSResilientDeepLinks * resilientDeepLinks; 
@property (readonly,nonatomic) _TtC11AppStoreKit14JSArcadeObject * arcade; 
@property (readonly,nonatomic) _TtC11AppStoreKit12JSGameCenter * gameCenter; 
@property (readonly,nonatomic) _TtC11AppStoreKit12AppleSilicon * appleSilicon; 
@required
-(NSDictionary *)props;
-(_TtC11AppStoreKit20JSResilientDeepLinks *)resilientDeepLinks;
-(ASKClient *)client;
-(_TtC11AppStoreKit14JSArcadeObject *)arcade;
-(_TtC11AppStoreKit20JSStoreMetricsObject *)storeMetrics;
-(id<_TtP11AppStoreKit20LocalizationProtocol_>)loc;
-(_TtC11AppStoreKit28JSPersonalizationStoreObject *)personalizationStore;
-(_TtC11AppStoreKit12JSUserObject *)user;
-(_TtC11AppStoreKit12JSGameCenter *)gameCenter;
-(_TtC11AppStoreKit12AppleSilicon *)appleSilicon;
-(_TtC11AppStoreKit21ClientOrderingWrapper *)clientOrdering;

@end

