/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class NSString, NSArray, NSURL, UIImage;

@interface TSEditorialItem : NSObject {

	 identifier;
	 title;
	 subtitle;
	 subtitleColor;
	 attributes;
	??? actionURL;
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
-(id)init;
-(NSString *)identifier;
-(NSArray *)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(NSString *)subtitleColor;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(id<FCHeadlineProviding>)headline;
-(NSURL *)actionURL;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setSubtitleColor:(NSString *)arg1 ;
-(id<FCTagProviding>)backingTag;
-(void)setBackingTag:(id<FCTagProviding>)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleColor:(id)arg4 attributes:(id)arg5 actionURL:(id)arg6 thumbnailImage:(id)arg7 backingTag:(id)arg8 headline:(id)arg9 ;
@end

