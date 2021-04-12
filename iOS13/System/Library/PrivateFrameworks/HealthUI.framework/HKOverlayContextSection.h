/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDisplayTypeContextItemSection.h>

@class NSString, NSArray;

@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection> {

	NSString* title;
	NSArray* items;
	NSString* _localizedSectionTitle;
	NSArray* _overlayContextItems;

}

@property (nonatomic,readonly) NSString * localizedSectionTitle;              //@synthesize localizedSectionTitle=_localizedSectionTitle - In the implementation block
@property (nonatomic,readonly) NSArray * overlayContextItems;                 //@synthesize overlayContextItems=_overlayContextItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSArray * items; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2 ;
-(NSArray *)overlayContextItems;
-(NSString *)localizedSectionTitle;
@end

