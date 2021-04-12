/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying> {

	short _renderValues[6];
	short _engagementValues[6];

}
+(BOOL)supportsSecureCoding;
-(void)incrementRankingValuesForType:(int)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)getRankingValues:(short*)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRankingValues:(short)arg1 forType:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

