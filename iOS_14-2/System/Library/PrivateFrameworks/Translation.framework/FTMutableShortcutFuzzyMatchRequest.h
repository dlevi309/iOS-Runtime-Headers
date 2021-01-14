/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTShortcutFuzzyMatchRequest.h>

@class FTShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSString;

@interface FTMutableShortcutFuzzyMatchRequest : FTShortcutFuzzyMatchRequest

@property (nonatomic,copy) FTShortcutFuzzyMatchRequest_StringTokenPair * utterance; 
@property (nonatomic,copy) NSArray * shortcuts; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * interaction_id; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * device_type; 
@property (nonatomic,copy) NSString * context; 
-(NSString *)locale;
-(FTShortcutFuzzyMatchRequest_StringTokenPair *)utterance;
-(void)setLocale:(NSString *)arg1 ;
-(id)init;
-(void)setUtterance:(FTShortcutFuzzyMatchRequest_StringTokenPair *)arg1 ;
-(void)setShortcuts:(NSArray *)arg1 ;
-(NSString *)context;
-(NSString *)device_type;
-(void)setDevice_type:(NSString *)arg1 ;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSArray *)shortcuts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)interaction_id;
-(void)setInteraction_id:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
@end

