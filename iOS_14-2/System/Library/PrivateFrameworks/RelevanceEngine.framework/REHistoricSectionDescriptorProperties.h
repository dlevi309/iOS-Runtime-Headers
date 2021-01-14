/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSString, NSSet;


@protocol REHistoricSectionDescriptorProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL invertsRanking; 
@property (nonatomic,readonly) long long maxElementCount; 
@property (nonatomic,readonly) NSSet * rules; 
@required
-(NSString *)name;
-(NSSet *)rules;
-(long long)maxElementCount;
-(BOOL)invertsRanking;

@end

