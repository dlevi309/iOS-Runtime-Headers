/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView {

	CAPackage* _package;
	NSArray* _rootViews;

}
+(BOOL)_shouldCatchDecodingExceptions;
+(id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3 ;
+(void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedViewWithName:(id)arg1 ;
@end

