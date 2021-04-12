/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVAccessoryItemContentProviding.h>

@protocol SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding;
@class SVMoreFromButton, NSString;

@interface SVMoreFromAccessoryItemContentProvider : NSObject <SVAccessoryItemContentProviding> {

	SVMoreFromButton* _accessoryItemButton;
	id<SVMoreFromPublisherActionTitleProviding> _titleProvider;
	id<SVMoreFromPublisherLogoProviding> _logoProvider;
	/*^block*/id _logoCancellationBlock;

}

@property (nonatomic,readonly) SVMoreFromButton * accessoryItemButton;                                 //@synthesize accessoryItemButton=_accessoryItemButton - In the implementation block
@property (nonatomic,readonly) id<SVMoreFromPublisherActionTitleProviding> titleProvider;              //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,readonly) id<SVMoreFromPublisherLogoProviding> logoProvider;                      //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,copy) id logoCancellationBlock;                                                   //@synthesize logoCancellationBlock=_logoCancellationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVMoreFromPublisherActionTitleProviding>)titleProvider;
-(SVMoreFromButton *)accessoryItemButton;
-(void)updateAccessoryItemForVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3 ;
-(id)logoCancellationBlock;
-(id<SVMoreFromPublisherLogoProviding>)logoProvider;
-(void)setLogoCancellationBlock:(id)arg1 ;
@end

