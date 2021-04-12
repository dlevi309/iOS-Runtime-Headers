/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

@class NSAttributedString;


@protocol HRFeatureRegulatoryPanelDisplayable <NSObject>
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
@optional
-(id<HRFeatureRegulatoryPanelDisplayUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;
-(void)handleUserInteractionWithItemWithHostViewController:(id)arg1;

@required
-(NSAttributedString *)valueString;
-(BOOL)isInteractive;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;

@end

