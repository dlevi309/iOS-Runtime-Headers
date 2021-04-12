/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

