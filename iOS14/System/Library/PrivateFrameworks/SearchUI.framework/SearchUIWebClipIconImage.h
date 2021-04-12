/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAppIconImage.h>

@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage {

	UIWebClip* _webClip;

}

@property (nonatomic,retain) UIWebClip * webClip;              //@synthesize webClip=_webClip - In the implementation block
+(id)convertImage:(id)arg1 ofSize:(CGSize)arg2 withShape:(unsigned long long)arg3 ;
-(UIWebClip *)webClip;
-(id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)uniqueIdentifier;
-(void)setWebClip:(UIWebClip *)arg1 ;
-(unsigned long long)hash;
-(id)generateImageWithFormat:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

