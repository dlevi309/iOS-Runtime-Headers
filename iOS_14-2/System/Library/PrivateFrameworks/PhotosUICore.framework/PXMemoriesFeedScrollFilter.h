/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>

@protocol PXMemoriesFeedScrollFilterDelegate;
@class PXScrollViewController, PXMemoriesSpec, NSDate, NSString;

@interface PXMemoriesFeedScrollFilter : NSObject <PXScrollViewControllerObserver> {

	double _additionalContentThreshold;
	struct {
		BOOL respondsToShouldRequestAdditionalContent;
	}  _delegateFlags;
	PXScrollViewController* _scrollViewController;
	PXMemoriesSpec* _spec;
	id<PXMemoriesFeedScrollFilterDelegate> _delegate;
	NSDate* __lastAdditionalContentRequestDate;

}

@property (setter=_setLastAdditionalContentRequestDate:,nonatomic,retain) NSDate * _lastAdditionalContentRequestDate;              //@synthesize _lastAdditionalContentRequestDate=__lastAdditionalContentRequestDate - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController;                                                      //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (nonatomic,retain) PXMemoriesSpec * spec;                                                                                //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic,__weak) id<PXMemoriesFeedScrollFilterDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(id<PXMemoriesFeedScrollFilterDelegate>)delegate;
-(PXMemoriesSpec *)spec;
-(void)setDelegate:(id<PXMemoriesFeedScrollFilterDelegate>)arg1 ;
-(id)initWithScrollViewController:(id)arg1 ;
-(NSDate *)_lastAdditionalContentRequestDate;
-(void)_setLastAdditionalContentRequestDate:(id)arg1 ;
@end

