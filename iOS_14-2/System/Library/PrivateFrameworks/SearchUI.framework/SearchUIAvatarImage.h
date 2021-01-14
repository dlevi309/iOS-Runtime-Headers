/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIImage.h>

@protocol CNCancelable;
@class NSArray, NSString;

@interface SearchUIAvatarImage : SearchUIImage {

	NSArray* _contactIdentifiers;
	NSString* _letters;
	id<CNCancelable> _renderingToken;

}

@property (nonatomic,copy) NSArray * contactIdentifiers;                   //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * letters;                           //@synthesize letters=_letters - In the implementation block
@property (nonatomic,retain) id<CNCancelable> renderingToken;              //@synthesize renderingToken=_renderingToken - In the implementation block
+(id)avatarImageRenderer;
-(int)defaultCornerRoundingStyle;
-(NSString *)letters;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)contactIdentifiers;
-(unsigned long long)hash;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)setLetters:(NSString *)arg1 ;
-(void)setDefaultSizeIfNecessary;
-(void)setRenderingToken:(id<CNCancelable>)arg1 ;
-(id)initWithMonogramImage:(id)arg1 ;
-(id)initWithContactImage:(id)arg1 ;
-(id<CNCancelable>)renderingToken;
-(BOOL)isEqual:(id)arg1 ;
@end

