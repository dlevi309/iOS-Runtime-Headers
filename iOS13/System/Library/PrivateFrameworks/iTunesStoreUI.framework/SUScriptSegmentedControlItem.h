/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptCanvasContext, NSString, UIImage;

@interface SUScriptSegmentedControlItem : SUScriptObject {

	SUScriptCanvasContext* _canvas;
	NSString* _identifier;
	UIImage* _image;
	NSString* _imageURLString;
	NSString* _title;
	id _userInfo;

}

@property (nonatomic,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (retain) SUScriptCanvasContext * canvas; 
@property (retain) NSString * identifier; 
@property (retain) NSString * imageURL; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(UIImage *)image;
-(id)_segmentedControl;
-(void)_setImage:(id)arg1 ;
-(SUScriptCanvasContext *)canvas;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(id)attributeKeys;
-(NSString *)imageURL;
-(void)setImageURL:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(void)_reloadUserInterface;
-(id)newPageSection;
-(id)initWithPageSection:(id)arg1 ;
@end

