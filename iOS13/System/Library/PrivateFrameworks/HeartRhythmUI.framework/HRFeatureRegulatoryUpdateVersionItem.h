/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <libobjc.A.dylib/HRFeatureRegulatoryPanelDisplayable.h>

@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryUpdateVersionItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {

	NSString* _productName;
	long long _deviceType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSAttributedString * titleString; 
@property (nonatomic,copy,readonly) NSAttributedString * valueString; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) long long cellAccessoryType; 
@property (assign,nonatomic,__weak) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate; 
-(NSAttributedString *)valueString;
-(BOOL)isInteractive;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;
-(id)initWithProductName:(id)arg1 deviceType:(long long)arg2 ;
@end

