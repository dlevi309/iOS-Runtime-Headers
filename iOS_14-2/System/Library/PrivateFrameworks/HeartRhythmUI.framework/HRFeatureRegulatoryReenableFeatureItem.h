/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)valueString;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(BOOL)isInteractive;
-(void)setDelegate:(id<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1 ;
-(id)initWithProductName:(id)arg1 delegate:(id)arg2 ;
@end

