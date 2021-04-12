/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, PKPass, PKPassColorProfile, PKPassBucketTemplate;

@interface PKPassBucketView : UIView {

	NSArray* _fieldViews;
	NSMutableArray* _currentFieldViews;
	long long _background;
	PKPass* _pass;
	PKPassColorProfile* _colorProfile;
	PKPassBucketTemplate* _bucketTemplate;
	NSArray* _bucket;

}

@property (nonatomic,retain) PKPass * pass;                                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                  //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,retain) PKPassBucketTemplate * bucketTemplate;              //@synthesize bucketTemplate=_bucketTemplate - In the implementation block
@property (nonatomic,retain) NSArray * bucket;                                   //@synthesize bucket=_bucket - In the implementation block
-(void)dealloc;
-(id)description;
-(NSArray *)bucket;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)setBucket:(NSArray *)arg1 ;
-(PKPassColorProfile *)colorProfile;
-(PKPassBucketTemplate *)bucketTemplate;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBucketTemplate:(PKPassBucketTemplate *)arg1 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(long long)_backgroundForBucketTemplate:(id)arg1 ;
-(void)_measureAndFitEvenlySizedSubviews;
-(void)_measureAndFitVariablySizedSubviews;
-(id)_fieldViewsByWidth;
-(void)_presentRecursiveDiff:(id)arg1 inView:(id)arg2 forSubviewAtIndex:(unsigned long long)arg3 withSubviews:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

