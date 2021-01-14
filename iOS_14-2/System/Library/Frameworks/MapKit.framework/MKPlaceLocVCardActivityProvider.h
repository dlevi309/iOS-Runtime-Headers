/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceActivityProvider.h>
#import <UIKit/UIActivityItemSource.h>

@class CNContact, NSString;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider <UIActivityItemSource> {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;                   //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 ;
@end

