/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <Foundation/NSListFormatter.h>

@class NSString;

@interface VUIICUListFormatter : NSListFormatter {

	NSString* _style;

}

@property (nonatomic,copy) NSString * style;              //@synthesize style=_style - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
+(id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)style;
-(id)initWithLocale:(id)arg1 style:(id)arg2 ;
@end

