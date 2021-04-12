/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVAccessoryItemContentProviding.h>

@protocol SVVideoTitleProviding;
@class SVAccessoryItemButton, NSString;

@interface SVAccessoryItemTextContentProvider : NSObject <SVAccessoryItemContentProviding> {

	SVAccessoryItemButton* _accessoryItemButton;
	id<SVVideoTitleProviding> _titleProvider;
	NSString* _headerText;

}

@property (nonatomic,readonly) SVAccessoryItemButton * accessoryItemButton;              //@synthesize accessoryItemButton=_accessoryItemButton - In the implementation block
@property (nonatomic,readonly) id<SVVideoTitleProviding> titleProvider;                  //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerText;                               //@synthesize headerText=_headerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerText;
-(id<SVVideoTitleProviding>)titleProvider;
-(SVAccessoryItemButton *)accessoryItemButton;
-(void)updateAccessoryItemForVideo:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithAccessoryItemButton:(id)arg1 titleProvider:(id)arg2 headerText:(id)arg3 ;
@end

