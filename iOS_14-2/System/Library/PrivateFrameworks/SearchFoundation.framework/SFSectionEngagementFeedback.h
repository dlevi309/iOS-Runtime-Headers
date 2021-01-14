/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying> {

	SFResultSection* _section;
	unsigned long long _triggerEvent;

}

@property (nonatomic,copy) SFResultSection * section;                      //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSection:(SFResultSection *)arg1 ;
-(SFResultSection *)section;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

