/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <libobjc.A.dylib/HRFeatureRegulatoryPanelDisplayable.h>

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;
@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {

	NSString* _productName;
	id<HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;

}

@property (assign,nonatomic) NSString * productName;                                                               //@synthesize productName=_productName - In the implementation block
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
-(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(void)setDelegate:(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(NSAttributedString *)valueString;
-(BOOL)isInteractive;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1 ;
-(id)initWithProductName:(id)arg1 delegate:(id)arg2 ;
@end

