/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, NSArray, NSURL, UIImage;

@interface TSEditorialItem : NSObject {

	 identifier;
	 title;
	 subtitle;
	 subtitleColor;
	 attributes;
	 thumbnailImage;
	 backingTag;
	 headline;

}

@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * subtitle; 
@property (copy,nonatomic) NSString * subtitleColor; 
@property (copy,nonatomic) NSArray * attributes; 
@property (copy,nonatomic) NSURL * actionURL; 
@property (retain,nonatomic) UIImage * thumbnailImage; 
@property (retain,nonatomic) id<FCTagProviding> backingTag; 
@property (retain,nonatomic) id<FCHeadlineProviding> headline; 
-(id<FCHeadlineProviding>)headline;
-(id)init;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(id<FCTagProviding>)backingTag;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)attributes;
-(UIImage *)thumbnailImage;
-(NSString *)subtitleColor;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)actionURL;
-(NSString *)identifier;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSString *)title;
-(void)setSubtitleColor:(NSString *)arg1 ;
-(void)setBackingTag:(id<FCTagProviding>)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 attributes:(id)arg5 actionURL:(id)arg6 thumbnailImage:(id)arg7 backingTag:(id)arg8 headline:(id)arg9 ;
@end

