/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback {

	SFResultSection* _section;
	unsigned long long _headerType;

}

@property (nonatomic,copy) SFResultSection * section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;              //@synthesize headerType=_headerType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSection:(SFResultSection *)arg1 ;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(SFResultSection *)section;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2 ;
-(unsigned long long)headerType;
-(id)initWithCoder:(id)arg1 ;
@end

