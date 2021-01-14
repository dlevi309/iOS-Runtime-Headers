/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol UIPageViewControllerDataSource <NSObject>
@optional
-(long long)presentationCountForPageViewController:(id)arg1;
-(long long)presentationIndexForPageViewController:(id)arg1;

@required
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

@end

