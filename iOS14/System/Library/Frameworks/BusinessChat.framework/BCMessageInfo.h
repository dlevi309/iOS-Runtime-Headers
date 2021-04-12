/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>

@class NSString, UIImage, NSDictionary;

@interface BCMessageInfo : NSObject <BSDescriptionProviding, BCDictionaryImageSerializable> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _alternateTitle;
	NSString* _imageIdentifier;
	NSString* _imageDescription;
	UIImage* _image;
	NSString* __style;

}

@property (assign,nonatomic) NSString * _style;                             //@synthesize _style=__style - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * alternateTitle;                     //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,retain) NSString * imageIdentifier;                    //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
-(NSString *)_style;
-(id)succinctDescription;
-(void)setImage:(UIImage *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(UIImage *)image;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(NSString *)imageIdentifier;
-(NSDictionary *)dictionaryValue;
-(void)set_style:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)style;
-(NSString *)title;
-(void)setAlternateTitle:(NSString *)arg1 ;
-(NSString *)alternateTitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(id)arg3 alternateTitle:(id)arg4 imageIdentifier:(id)arg5 imageDescription:(id)arg6 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(void)setImageIdentifier:(NSString *)arg1 ;
@end

