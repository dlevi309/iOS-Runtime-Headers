/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class SFCard;

@interface SFCardViewDisappearFeedback : SFFeedback {

	SFCard* _card;
	unsigned long long _cardDisappearEvent;

}

@property (nonatomic,readonly) SFCard * card;                                    //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned long long cardDisappearEvent;              //@synthesize cardDisappearEvent=_cardDisappearEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(SFCard *)card;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCardDisappearEvent:(unsigned long long)arg1 ;
-(unsigned long long)cardDisappearEvent;
-(id)initWithCard:(id)arg1 event:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

