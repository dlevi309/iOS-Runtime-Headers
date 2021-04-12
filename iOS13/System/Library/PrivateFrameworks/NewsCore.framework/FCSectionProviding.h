/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, FCSectionSupergroupKnobs;


@protocol FCSectionProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSString * parentID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) FCSectionSupergroupKnobs * supergroupKnobs; 
@required
-(NSString *)parentID;
-(NSString *)supergroupKnobsJson;
-(FCSectionSupergroupKnobs *)supergroupKnobs;

@end

