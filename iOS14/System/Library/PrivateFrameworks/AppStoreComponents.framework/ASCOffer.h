/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

@class ASCAdamID, NSDictionary, NSNumber, NSArray;


@protocol ASCOffer <NSObject,NSCopying>
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) NSDictionary * titles; 
@property (nonatomic,copy,readonly) NSDictionary * subtitles; 
@property (nonatomic,readonly) long long flags; 
@property (nonatomic,readonly) NSNumber * ageRating; 
@property (nonatomic,readonly) NSArray * metrics; 
@required
-(ASCAdamID *)id;
-(NSArray *)metrics;
-(long long)flags;
-(NSNumber *)ageRating;
-(NSDictionary *)subtitles;
-(NSDictionary *)titles;
-(id)offerWithMetrics:(id)arg1;

@end

