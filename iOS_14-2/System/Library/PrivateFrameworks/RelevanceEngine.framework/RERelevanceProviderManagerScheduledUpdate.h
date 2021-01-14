/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProviderManagerUpdate.h>

@class NSDate;

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate {

	NSDate* _updateDate;

}

@property (nonatomic,readonly) NSDate * updateDate;              //@synthesize updateDate=_updateDate - In the implementation block
-(NSDate *)updateDate;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProvider:(id)arg1 updateDate:(id)arg2 ;
@end

