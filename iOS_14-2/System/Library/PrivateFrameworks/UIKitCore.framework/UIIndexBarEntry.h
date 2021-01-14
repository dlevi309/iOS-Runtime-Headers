/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIImage, NSIndexPath;

@interface UIIndexBarEntry : NSObject {

	NSString* _title;
	NSString* _shortTitle;
	long long _type;
	UIImage* _image;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * effectiveShortTitle; 
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPath;                         //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy) NSString * shortTitle;                           //@synthesize shortTitle=_shortTitle - In the implementation block
+(id)entryWithTitle:(id)arg1 ;
+(id)entryWithType:(long long)arg1 ;
+(id)_dotImageInView:(id)arg1 ;
+(id)_externalDotImageInView:(id)arg1 ;
+(id)entryForNumbers;
+(id)entryForSearch;
+(id)entryForDotInView:(id)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(UIImage *)image;
-(id)description;
-(long long)type;
-(NSString *)shortTitle;
-(NSString *)effectiveShortTitle;
-(void)setShortTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

