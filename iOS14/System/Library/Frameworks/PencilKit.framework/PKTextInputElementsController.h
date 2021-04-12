/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol PKTextInputElementsControllerDelegate;
@class UIView, NSDictionary, NSString;

@interface PKTextInputElementsController : NSObject <PKTextInputDebugStateReporting> {

	long long _nextElementRecognitionIdentifierIndex;
	long long _finderGenerationCounter;
	long long _finderGenerationOfLastDiscoveredElements;
	id<PKTextInputElementsControllerDelegate> _delegate;
	UIView* _containerView;
	NSDictionary* _lastDiscoveredElementsByUniqueID;
	double _lastDiscoveredElementsUpdateTime;

}

@property (setter=_setLastDiscoveredElementsByUniqueID:,nonatomic,copy) NSDictionary * lastDiscoveredElementsByUniqueID;              //@synthesize lastDiscoveredElementsByUniqueID=_lastDiscoveredElementsByUniqueID - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputElementsControllerDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) double lastDiscoveredElementsUpdateTime;                                                               //@synthesize lastDiscoveredElementsUpdateTime=_lastDiscoveredElementsUpdateTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContainerView:(UIView *)arg1 ;
-(id<PKTextInputElementsControllerDelegate>)delegate;
-(void)setDelegate:(id<PKTextInputElementsControllerDelegate>)arg1 ;
-(UIView *)containerView;
-(id)initWithContainerView:(id)arg1 ;
-(NSDictionary *)lastDiscoveredElementsByUniqueID;
-(void)_replaceLastDiscoveredElementsWithElements:(id)arg1 ;
-(void)_setLastDiscoveredElementsByUniqueID:(id)arg1 ;
-(double)lastDiscoveredElementsUpdateTime;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(void)updateTextInputElementsWithReferenceHitPoint:(CGPoint)arg1 referenceSearchArea:(CGRect)arg2 referenceCoordSpace:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)flushDiscoveredElements;
@end

