/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngine/REImage.h>

@class UIImage;

@interface REImageImage : REImage {

	UIImage* _uiImage;

}

@property (nonatomic,retain) UIImage * uiImage;              //@synthesize uiImage=_uiImage - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(void)setUiImage:(UIImage *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)image;
-(UIImage *)uiImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

