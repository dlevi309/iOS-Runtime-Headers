/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionAlert : VUIAction {

	NSString* _title;
	NSString* _descriptionString;
	NSString* _dismissButtonTitle;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * descriptionString;               //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,retain) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)descriptionString;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

