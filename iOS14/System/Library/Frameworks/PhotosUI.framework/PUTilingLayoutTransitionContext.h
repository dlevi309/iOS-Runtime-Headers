/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface PUTilingLayoutTransitionContext : NSObject {

	BOOL _isCancelingTransition;
	BOOL _isUpdatingDisplayedContent;
	NSObject*<OS_dispatch_group> _displayedContentUpdateGroup;

}

@property (assign,setter=setCancelingTransition:,nonatomic) BOOL isCancelingTransition;              //@synthesize isCancelingTransition=_isCancelingTransition - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingDisplayedContent;                                        //@synthesize isUpdatingDisplayedContent=_isUpdatingDisplayedContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> displayedContentUpdateGroup;               //@synthesize displayedContentUpdateGroup=_displayedContentUpdateGroup - In the implementation block
-(BOOL)isCancelingTransition;
-(void)setIsUpdatingDisplayedContent:(BOOL)arg1 ;
-(void)setCancelingTransition:(BOOL)arg1 ;
-(void)setDisplayedContentUpdateGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)displayedContentUpdateGroup;
-(BOOL)isUpdatingDisplayedContent;
@end

