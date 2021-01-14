/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItems:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2 ;
-(NSString *)title;
-(NSArray *)overlayContextItems;
-(NSString *)localizedSectionTitle;
@end

