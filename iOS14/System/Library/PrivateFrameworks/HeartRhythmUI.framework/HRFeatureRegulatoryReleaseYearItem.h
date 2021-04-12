/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <libobjc.A.dylib/HRFeatureRegulatoryPanelDisplayable.h>

@class NSString, NSAttributedString;

@interface HRFeatureRegulatoryReleaseYearItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {

	NSString* _productName;
	long long _deviceType;

}

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
-(BOOL)isInteractive;
-(NSAttributedString *)titleString;
-(long long)cellAccessoryType;
-(id)initWithProductName:(id)arg1 deviceType:(long long)arg2 ;
@end

