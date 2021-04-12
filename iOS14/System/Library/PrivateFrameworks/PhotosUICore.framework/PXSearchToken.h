/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class UISearchToken, PXSearchTokenRepresentedObject, UIImage, NSString, NSAttributedString;

@interface PXSearchToken : NSObject {

	UISearchToken* _searchObject;
	PXSearchTokenRepresentedObject* _representedObject;
	UIImage* _image;
	NSString* _text;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) UISearchToken * searchObject;                                    //@synthesize searchObject=_searchObject - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                               //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) PXSearchTokenRepresentedObject * representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
-(NSAttributedString *)attributedText;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setRepresentedObject:(PXSearchTokenRepresentedObject *)arg1 ;
-(NSString *)text;
-(id)initWithText:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
-(UISearchToken *)searchObject;
-(id)textValue;
-(void)setSearchObject:(UISearchToken *)arg1 ;
-(id)initWithAttributedText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3 ;
-(id)initWithText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3 ;
-(PXSearchTokenRepresentedObject *)representedObject;
@end

