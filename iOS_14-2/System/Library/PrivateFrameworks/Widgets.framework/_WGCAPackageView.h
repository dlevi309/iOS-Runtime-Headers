/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/_UICAPackageView.h>

@class NSURL, NSString;

@interface _WGCAPackageView : _UICAPackageView {

	NSURL* _archiveURL;

}

@property (nonatomic,copy) NSURL * archiveURL;                                  //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapshotIdentifier; 
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSURL *)archiveURL;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(id)description;
-(NSString *)snapshotIdentifier;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1 ;
@end

