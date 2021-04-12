/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol CPSInformationScrollViewDelegate;
@class NSMutableArray;

@interface CPSInformationScrollView : UIScrollView {

	id<CPSInformationScrollViewDelegate> _scrollviewDelegate;
	NSMutableArray* _focusWaypoints;

}

@property (assign,nonatomic,__weak) id<CPSInformationScrollViewDelegate> scrollviewDelegate;              //@synthesize scrollviewDelegate=_scrollviewDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * focusWaypoints;                                             //@synthesize focusWaypoints=_focusWaypoints - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(id<CPSInformationScrollViewDelegate>)scrollviewDelegate;
-(void)setScrollviewDelegate:(id<CPSInformationScrollViewDelegate>)arg1 ;
-(NSMutableArray *)focusWaypoints;
-(void)setFocusWaypoints:(NSMutableArray *)arg1 ;
@end

