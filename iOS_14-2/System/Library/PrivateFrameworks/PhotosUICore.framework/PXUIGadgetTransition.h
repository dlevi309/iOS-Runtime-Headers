/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXGadgetTransition.h>

@protocol PXGridPresentation;
@class PXOneUpPresentation, NSString;

@interface PXUIGadgetTransition : NSObject <PXGadgetTransition> {

	PXOneUpPresentation* _oneUpPresentation;
	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,readonly) PXOneUpPresentation * oneUpPresentation;              //@synthesize oneUpPresentation=_oneUpPresentation - In the implementation block
@property (nonatomic,readonly) id<PXGridPresentation> gridPresentation;              //@synthesize gridPresentation=_gridPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXOneUpPresentation *)oneUpPresentation;
-(id)initWithOneUpPresentation:(id)arg1 gridPresentation:(id)arg2 ;
-(id<PXGridPresentation>)gridPresentation;
@end

