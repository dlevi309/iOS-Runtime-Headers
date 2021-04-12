/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_titleFont;
+(id)viewWithURL:(id)arg1 ;
+(id)viewWithTitle:(id)arg1 URL:(id)arg2 ;
+(id)_urlFont;
+(id)viewWithTitle:(id)arg1 URLText:(id)arg2 ;
+(id)viewWithURLText:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setUrlText:(NSString *)arg1 ;
-(NSString *)urlText;
@end

