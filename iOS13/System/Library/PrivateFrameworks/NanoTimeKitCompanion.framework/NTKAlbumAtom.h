/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NPTOPhoto, UIImage, NSString, NSDate;

@interface NTKAlbumAtom : NSObject {

	NPTOPhoto* _photo;
	UIImage* _image;
	NSString* _identifier;
	unsigned long long _index;
	NSDate* _date;

}

@property (nonatomic,readonly) NPTOPhoto * photo;                       //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSString *)identifier;
-(unsigned long long)index;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(NPTOPhoto *)photo;
-(id)initWithPhoto:(id)arg1 ;
@end

