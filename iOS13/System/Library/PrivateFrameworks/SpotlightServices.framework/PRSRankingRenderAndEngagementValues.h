/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)getRankingValues:(short*)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3 ;
-(void)setRankingValues:(short)arg1 forType:(int)arg2 ;
-(void)incrementRankingValuesForType:(int)arg1 ;
@end

