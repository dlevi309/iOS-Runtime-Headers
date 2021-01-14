/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(id)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(id)userInfo;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(UIImage *)image;
-(void)_setImage:(id)arg1 ;
-(id)_segmentedControl;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)imageURL;
-(id)_className;
-(SUScriptCanvasContext *)canvas;
-(NSString *)title;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)_reloadUserInterface;
-(id)newPageSection;
-(id)initWithPageSection:(id)arg1 ;
@end

