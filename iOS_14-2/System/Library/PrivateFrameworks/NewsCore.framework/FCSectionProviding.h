/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, FCSectionSupergroupKnobs;


@protocol FCSectionProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSString * parentID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) FCSectionSupergroupKnobs * supergroupKnobs; 
@required
-(FCSectionSupergroupKnobs *)supergroupKnobs;
-(NSString *)supergroupKnobsJson;
-(NSString *)parentID;

@end

