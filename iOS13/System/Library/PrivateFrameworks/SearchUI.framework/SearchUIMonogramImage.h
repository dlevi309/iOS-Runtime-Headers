/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMonogramImage : SearchUIImage {

	NSString* _letters;

}

@property (nonatomic,retain) NSString * letters;              //@synthesize letters=_letters - In the implementation block
+(id)avatarImageRenderer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)letters;
-(void)setLetters:(NSString *)arg1 ;
-(id)initWithSFImage:(id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end

