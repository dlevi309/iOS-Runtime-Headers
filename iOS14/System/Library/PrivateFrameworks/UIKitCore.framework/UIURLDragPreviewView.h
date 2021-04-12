/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray, NSString, NSURL;

@interface UIURLDragPreviewView : UIView {

	UILabel* _titleLabel;
	UILabel* _urlLabel;
	NSArray* _titleAndUrlConstraints;
	NSArray* _urlOnlyConstraints;
	NSString* _title;
	NSURL* _url;
	NSString* _urlText;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * urlText;              //@synthesize urlText=_urlText - In the implementation block
+(void)initialize;
+(id)_urlFont;
+(id)_titleFont;
+(id)viewWithTitle:(id)arg1 URL:(id)arg2 ;
+(id)viewWithTitle:(id)arg1 URLText:(id)arg2 ;
+(id)viewWithURLText:(id)arg1 ;
+(id)viewWithURL:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)urlText;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(void)updateConstraints;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setUrlText:(NSString *)arg1 ;
-(NSString *)title;
@end

