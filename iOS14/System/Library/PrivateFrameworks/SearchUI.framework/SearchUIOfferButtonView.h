/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKStoreButton.h>

@class NSString;

@interface SearchUIOfferButtonView : TLKStoreButton {

	BOOL _adjustsFontSizeToFitWidth;
	NSString* _symbolImageName;

}

@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;              //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (nonatomic,retain) NSString * symbolImageName;                  //@synthesize symbolImageName=_symbolImageName - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(BOOL)adjustsFontSizeToFitWidth;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
@end

