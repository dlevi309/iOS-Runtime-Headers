/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback {

	unsigned _level;
	SFCard* _card;
	NSString* _fbr;

}

@property (nonatomic,retain) SFCard * card;               //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * fbr;                //@synthesize fbr=_fbr - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)fbr;
-(SFCard *)card;
-(void)setFbr:(NSString *)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCard:(id)arg1 ;
-(unsigned)level;
-(id)initWithCoder:(id)arg1 ;
-(void)setLevel:(unsigned)arg1 ;
@end

