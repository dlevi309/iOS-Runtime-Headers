/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)title;
-(id)message;
-(id)_buildVersion;
-(NSSet *)layerNames;
-(void)setLayerNames:(NSSet *)arg1 ;
-(id)radarDescription;
-(BOOL)shouldShowInLockScreen;
-(BOOL)ignoreIfAlreadyDisplaying;
-(id)radarTitle;
-(long long)radarClassification;
-(long long)radarReproducibility;
@end

