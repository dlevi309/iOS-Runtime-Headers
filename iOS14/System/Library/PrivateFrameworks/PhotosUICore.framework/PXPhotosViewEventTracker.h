/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMediaViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPhotosViewEventTracker.h>

@protocol PXPhotosViewEventTracker <PXViewControllerEventTracker>
@end


@class PXPhotosViewModel, NSNumber, NSString, NSMutableDictionary;

@interface PXPhotosViewEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXPhotosViewEventTracker> {

	PXPhotosViewModel* _viewModel;
	NSNumber* _isInSelectModeValue;
	double _isInSelectModeValueTimestamp;

}

@property (nonatomic,retain) NSNumber * isInSelectModeValue;                     //@synthesize isInSelectModeValue=_isInSelectModeValue - In the implementation block
@property (nonatomic,readonly) double isInSelectModeValueTimestamp;              //@synthesize isInSelectModeValueTimestamp=_isInSelectModeValueTimestamp - In the implementation block
@property (nonatomic,readonly) PXPhotosViewModel * viewModel;                    //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * payload; 
+(double)selectModeImpressionMinimumDuration;
+(id)analyticsViewName;
-(id)initWithViewModel:(id)arg1 ;
-(id)initWithViewName:(id)arg1 ;
-(void)setIsInSelectModeValue:(NSNumber *)arg1 ;
-(PXPhotosViewModel *)viewModel;
-(double)isInSelectModeValueTimestamp;
-(void)_updateTrackedValues;
-(void)_invalidateTrackedValues;
-(NSNumber *)isInSelectModeValue;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

