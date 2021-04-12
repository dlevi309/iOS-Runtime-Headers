/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSString, NSDictionary;


@protocol MiroBlueprintTitleStyleProtocol <NSObject>
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) NSDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * titleAndAnimationStyleDescription; 
@property (nonatomic,readonly) BOOL titleRequestsColorAnalysis; 
@required
-(NSString *)fontName;
-(NSString *)effectID;
-(NSString *)titleAndAnimationStyleDescription;
-(NSDictionary *)parametersDictionary;
-(BOOL)titleRequestsColorAnalysis;

@end

