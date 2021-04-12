/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXGMutableLayoutGuide.h>

@class PXGLayout;

@interface PXGLayoutGuide : PXObservable <PXGMutableLayoutGuide> {

	PXGLayout* _referenceLayout;
	CGRect _referenceRect;

}

@property (assign,nonatomic) CGRect referenceRect;                            //@synthesize referenceRect=_referenceRect - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * referenceLayout;              //@synthesize referenceLayout=_referenceLayout - In the implementation block
-(void)setReferenceRect:(CGRect)arg1 ;
-(void)setReferenceLayout:(PXGLayout *)arg1 ;
-(PXGLayout *)referenceLayout;
-(CGRect)referenceRect;
-(void)performChanges:(/*^block*/id)arg1 ;
-(CGRect)rectInLayout:(id)arg1 ;
-(void)setRect:(CGRect)arg1 inLayout:(id)arg2 ;
@end

