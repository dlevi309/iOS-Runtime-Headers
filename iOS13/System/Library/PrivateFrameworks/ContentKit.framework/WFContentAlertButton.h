/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFSelectableAlertButton.h>

@protocol OS_dispatch_group;
@class NSString, WFContentItem, NSObject;

@interface WFContentAlertButton : WFSelectableAlertButton {

	BOOL _hasContentSubtitle;
	BOOL _hideSubtitle;
	NSString* _subtitle;
	WFContentItem* _contentItem;
	NSObject*<OS_dispatch_group> _group;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) WFContentItem * contentItem;                   //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) BOOL hasContentSubtitle;                       //@synthesize hasContentSubtitle=_hasContentSubtitle - In the implementation block
@property (assign,nonatomic) BOOL hideSubtitle;                               //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
+(id)buttonWithContentItem:(id)arg1 selected:(BOOL)arg2 stickySelection:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(void)processContentAlertButtonSubtitles:(id)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)start;
-(NSString *)subtitle;
-(NSObject*<OS_dispatch_group>)group;
-(void)setSubtitle:(NSString *)arg1 ;
-(WFContentItem *)contentItem;
-(void)setHideSubtitle:(BOOL)arg1 ;
-(BOOL)hideSubtitle;
-(BOOL)hasContentSubtitle;
-(void)getSubtitle:(/*^block*/id)arg1 ;
-(BOOL)addSubtitleCompletionHandler:(/*^block*/id)arg1 ;
@end

