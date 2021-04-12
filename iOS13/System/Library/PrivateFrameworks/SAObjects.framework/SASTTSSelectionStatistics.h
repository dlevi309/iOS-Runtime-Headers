/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)completionType;
-(void)setCompletionType:(NSString *)arg1 ;
-(NSArray *)listenedItems;
-(void)setListenedItems:(NSArray *)arg1 ;
-(NSArray *)timesListened;
-(void)setTimesListened:(NSArray *)arg1 ;
@end

