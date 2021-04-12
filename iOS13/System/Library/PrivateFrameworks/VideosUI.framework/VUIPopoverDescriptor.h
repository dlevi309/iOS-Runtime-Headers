/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class IKImageElement, IKViewElement, UIColor, NSString, NSArray;

@interface VUIPopoverDescriptor : NSObject {

	IKImageElement* _imageElement;
	IKViewElement* _buttonElement;
	IKViewElement* _popoverElement;
	UIColor* _tintColor;
	NSString* _title;
	unsigned long long _type;
	NSArray* _popoverEntries;
	CGSize _popoverSize;

}

@property (nonatomic,readonly) IKViewElement * buttonElement;               //@synthesize buttonElement=_buttonElement - In the implementation block
@property (nonatomic,readonly) IKViewElement * popoverElement;              //@synthesize popoverElement=_popoverElement - In the implementation block
@property (nonatomic,readonly) CGSize popoverSize;                          //@synthesize popoverSize=_popoverSize - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                         //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * popoverEntries;               //@synthesize popoverEntries=_popoverEntries - In the implementation block
-(id)init;
-(unsigned long long)type;
-(id)_init;
-(NSString *)title;
-(UIColor *)tintColor;
-(id)initWithViewElement:(id)arg1 ;
-(CGSize)popoverSize;
-(void)_populateWithElement:(id)arg1 ;
-(NSArray *)popoverEntries;
-(IKViewElement *)buttonElement;
-(IKViewElement *)popoverElement;
@end

