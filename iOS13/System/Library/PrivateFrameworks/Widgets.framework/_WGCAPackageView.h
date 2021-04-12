/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(NSURL *)archiveURL;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1 ;
-(NSString *)snapshotIdentifier;
@end

