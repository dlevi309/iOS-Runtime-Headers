/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngine/REImage.h>

@class UIImage;

@interface REImageImage : REImage {

	UIImage* _uiImage;

}

@property (nonatomic,retain) UIImage * uiImage;              //@synthesize uiImage=_uiImage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)image;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)uiImage;
-(void)setUiImage:(UIImage *)arg1 ;
@end

