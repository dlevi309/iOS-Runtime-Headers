/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSString *)descriptionString;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

