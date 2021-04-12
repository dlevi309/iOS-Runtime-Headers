/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)level;
-(void)setLevel:(unsigned)arg1 ;
-(SFCard *)card;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithCard:(id)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
@end

