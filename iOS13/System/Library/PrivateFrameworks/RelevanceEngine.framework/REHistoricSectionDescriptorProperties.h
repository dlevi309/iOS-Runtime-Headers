/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

