/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@class DKReporterRegistry;

@interface DKReportPlanner : NSObject {

	DKReporterRegistry* _registry;

}

@property (nonatomic,retain) DKReporterRegistry * registry;              //@synthesize registry=_registry - In the implementation block
+(id)plannerWithReportGeneratorRegistry:(id)arg1 ;
-(DKReporterRegistry *)registry;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(id)requestGroupsForPredicateManifest:(id)arg1 ;
-(id)initWithReportGeneratorRegistry:(id)arg1 ;
-(id)_resolveComponentIdentityManifest:(id)arg1 ;
@end

