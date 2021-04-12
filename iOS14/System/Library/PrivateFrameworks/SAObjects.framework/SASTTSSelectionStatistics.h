/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * completionType; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSArray * listenedItems; 
@property (assign,nonatomic) long long selectedItemIndex; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSArray * timesListened; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(NSString *)completionType;
-(void)setCompletionType:(NSString *)arg1 ;
-(NSArray *)listenedItems;
-(void)setListenedItems:(NSArray *)arg1 ;
-(NSArray *)timesListened;
-(void)setTimesListened:(NSArray *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(long long)selectedItemIndex;
@end

