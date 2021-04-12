/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHVisualizationManagerDelegate.h>

@protocol PKVisualizationManager;
@class CHVisualizationManager, NSString;

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate> {

	id<PKVisualizationManager> _delegate;
	CHVisualizationManager* _chVisualizationManager;

}

@property (nonatomic,retain) CHVisualizationManager * chVisualizationManager;              //@synthesize chVisualizationManager=_chVisualizationManager - In the implementation block
@property (assign,nonatomic) BOOL recognitionStatusReportingEnabled; 
@property (assign,nonatomic,__weak) id<PKVisualizationManager> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)availableRecognitionStatusKeys;
+(id)localizedNameForRecognitionStatusKey:(id)arg1 ;
-(id<PKVisualizationManager>)delegate;
-(void)setDelegate:(id<PKVisualizationManager>)arg1 ;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(void)visualizationManagerNeedsDisplay:(id)arg1 ;
-(void)visualizationManagerDidUpdateSessionStatus:(id)arg1 ;
-(CHVisualizationManager *)chVisualizationManager;
-(id)valueForRecognitionStatusKey:(id)arg1 ;
-(BOOL)recognitionStatusReportingEnabled;
-(void)setRecognitionStatusReportingEnabled:(BOOL)arg1 ;
-(void)setChVisualizationManager:(CHVisualizationManager *)arg1 ;
@end

