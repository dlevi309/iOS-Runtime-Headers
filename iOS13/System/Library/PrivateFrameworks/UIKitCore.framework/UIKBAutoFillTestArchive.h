/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, UIKBAutoFillTestExpectedResult, UIView, NSString, UINavigationItem;

@interface UIKBAutoFillTestArchive : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _tableViewTagToDataSource;
	BOOL _requiresNavigationControllerNesting;
	UIKBAutoFillTestExpectedResult* _expectedResult;
	UIView* _snapshotView;
	NSString* _viewControllerClassName;
	NSString* _viewControllerTitle;
	NSString* _navigationControllerClassName;
	NSString* _presentingViewControllerClassName;
	UINavigationItem* _viewControllerNavigationItem;

}

@property (nonatomic,retain) UIView * snapshotView;                                        //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,copy) NSString * viewControllerClassName;                             //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * viewControllerTitle;                                 //@synthesize viewControllerTitle=_viewControllerTitle - In the implementation block
@property (assign,nonatomic) BOOL requiresNavigationControllerNesting;                     //@synthesize requiresNavigationControllerNesting=_requiresNavigationControllerNesting - In the implementation block
@property (nonatomic,copy) NSString * navigationControllerClassName;                       //@synthesize navigationControllerClassName=_navigationControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * presentingViewControllerClassName;                   //@synthesize presentingViewControllerClassName=_presentingViewControllerClassName - In the implementation block
@property (nonatomic,retain) UINavigationItem * viewControllerNavigationItem;              //@synthesize viewControllerNavigationItem=_viewControllerNavigationItem - In the implementation block
@property (nonatomic,retain) UIKBAutoFillTestExpectedResult * expectedResult;              //@synthesize expectedResult=_expectedResult - In the implementation block
+(id)autoFillTestArchiveWithData:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)snapshotView;
-(id)autoFillTestArchiveData;
-(id)tableViewDataSourceWithTag:(long long)arg1 ;
-(void)setTableViewDataSource:(id)arg1 forTableViewWithTag:(long long)arg2 ;
-(UIKBAutoFillTestExpectedResult *)expectedResult;
-(void)setExpectedResult:(UIKBAutoFillTestExpectedResult *)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(NSString *)viewControllerClassName;
-(void)setViewControllerClassName:(NSString *)arg1 ;
-(NSString *)viewControllerTitle;
-(void)setViewControllerTitle:(NSString *)arg1 ;
-(BOOL)requiresNavigationControllerNesting;
-(void)setRequiresNavigationControllerNesting:(BOOL)arg1 ;
-(NSString *)navigationControllerClassName;
-(void)setNavigationControllerClassName:(NSString *)arg1 ;
-(NSString *)presentingViewControllerClassName;
-(void)setPresentingViewControllerClassName:(NSString *)arg1 ;
-(UINavigationItem *)viewControllerNavigationItem;
-(void)setViewControllerNavigationItem:(UINavigationItem *)arg1 ;
@end

