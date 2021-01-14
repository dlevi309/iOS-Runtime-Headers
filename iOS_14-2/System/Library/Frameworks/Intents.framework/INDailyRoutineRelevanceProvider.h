/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INRelevanceProvider.h>

@interface INDailyRoutineRelevanceProvider : INRelevanceProvider {

	long long _situation;

}

@property (nonatomic,readonly) long long situation;              //@synthesize situation=_situation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSituation:(long long)arg1 ;
-(long long)situation;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

