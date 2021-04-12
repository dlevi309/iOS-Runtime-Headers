/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDiagnosticRequestAlertItem.h>

@class NSString, NSSet;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem {

	NSString* _processName;
	NSSet* _layerNames;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) NSSet * layerNames;                  //@synthesize layerNames=_layerNames - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(id)message;
-(NSString *)processName;
-(NSSet *)layerNames;
-(void)setLayerNames:(NSSet *)arg1 ;
-(id)_buildVersion;
-(id)radarTitle;
-(BOOL)shouldShowInLockScreen;
-(long long)radarClassification;
-(id)radarDescription;
-(id)title;
-(BOOL)ignoreIfAlreadyDisplaying;
-(long long)radarReproducibility;
@end

