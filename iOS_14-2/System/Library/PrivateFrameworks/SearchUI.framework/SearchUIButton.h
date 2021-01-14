/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton {

	BOOL _useCompactMode;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL useCompactMode;                  //@synthesize useCompactMode=_useCompactMode - In the implementation block
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(unsigned long long)type;
-(BOOL)useCompactMode;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(void)updateWithType:(unsigned long long)arg1 ;
-(BOOL)isPlayButton;
@end

