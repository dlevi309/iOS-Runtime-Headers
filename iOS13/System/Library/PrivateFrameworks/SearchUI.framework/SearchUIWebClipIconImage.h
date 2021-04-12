/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIAppIconImage.h>

@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage {

	UIWebClip* _webClip;

}

@property (nonatomic,retain) UIWebClip * webClip;              //@synthesize webClip=_webClip - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)uniqueIdentifier;
-(UIWebClip *)webClip;
-(id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)generateImageWithFormat:(int)arg1 ;
-(void)setWebClip:(UIWebClip *)arg1 ;
@end

