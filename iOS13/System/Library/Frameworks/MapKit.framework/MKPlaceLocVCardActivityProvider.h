/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceActivityProvider.h>
#import <libobjc.A.dylib/MKActivityItemSource.h>

@class CNContact, NSString;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider <MKActivityItemSource> {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;                   //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 ;
@end

