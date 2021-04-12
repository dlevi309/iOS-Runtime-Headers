/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

