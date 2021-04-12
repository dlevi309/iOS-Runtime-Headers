/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeatureView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXPhotoAnalysisStatusController, NSString;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver> {

	PXPhotoAnalysisStatusController* _statusController;
	NSString* _statusDescription;
	double _preferredStatusWidth;

}

@property (nonatomic,copy,readonly) NSString * statusDescription;              //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,readonly) double preferredStatusWidth;                    //@synthesize preferredStatusWidth=_preferredStatusWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setStatusDescription:(id)arg1 ;
-(void)statusDescriptionDidChange;
-(void)_updateStatusDescription;
-(double)preferredStatusWidth;
-(NSString *)statusDescription;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

