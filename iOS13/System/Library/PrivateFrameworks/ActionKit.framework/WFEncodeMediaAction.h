/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction {

	NSMutableArray* _exportSessions;

}

@property (nonatomic,retain) NSMutableArray * exportSessions;              //@synthesize exportSessions=_exportSessions - In the implementation block
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)nonEmptyStringValueForKey:(id)arg1 ;
-(void)getMetadataItems:(/*^block*/id)arg1 ;
-(id)metadataForAsset:(id)arg1 newMetadata:(id)arg2 ;
-(void)encodeItems:(id)arg1 metadata:(id)arg2 ;
-(void)updateSpeedVisibility;
-(NSMutableArray *)exportSessions;
-(void)setExportSessions:(NSMutableArray *)arg1 ;
@end

