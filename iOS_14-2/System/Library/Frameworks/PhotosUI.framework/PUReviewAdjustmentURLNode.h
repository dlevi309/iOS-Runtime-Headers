/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUAdjustmentURLNode.h>

@class NSURL, PUReviewAsset, PHContentEditingOutput, NSArray, NSString;

@interface PUReviewAdjustmentURLNode : PXRunNode <PUAdjustmentURLNode> {

	NSURL* _adjustmentURL;
	NSURL* _directory;
	PUReviewAsset* _reviewAsset;
	PHContentEditingOutput* _contentEditingOutput;

}

@property (nonatomic,readonly) NSURL * directory;                                          //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) PUReviewAsset * reviewAsset;                                //@synthesize reviewAsset=_reviewAsset - In the implementation block
@property (nonatomic,readonly) PHContentEditingOutput * contentEditingOutput;              //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (nonatomic,readonly) NSURL * adjustmentURL;                                      //@synthesize adjustmentURL=_adjustmentURL - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(NSURL *)directory;
-(NSURL *)adjustmentURL;
-(id)initWithReviewAsset:(id)arg1 directory:(id)arg2 contentEditingOutput:(id)arg3 ;
-(PHContentEditingOutput *)contentEditingOutput;
-(PUReviewAsset *)reviewAsset;
@end

