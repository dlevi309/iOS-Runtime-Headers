/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <ShareSheet/UIActivityViewController.h>
#import <libobjc.A.dylib/PXActivityDataSource.h>

@class NSArray, NSString;

@interface PHActivityViewController : UIActivityViewController <PXActivityDataSource> {

	NSArray* __PHActivityItems;

}

@property (setter=_setPHActivityItems:,nonatomic,copy) NSArray * _PHActivityItems;              //@synthesize _PHActivityItems=__PHActivityItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateActivityItems:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)activityViewControllerForActivity:(id)arg1 ;
-(id)activityItemsForActivity:(id)arg1 ;
-(NSArray *)_PHActivityItems;
-(void)_setPHActivityItems:(id)arg1 ;
@end

