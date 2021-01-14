/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,copy) NSArray * nextItems; 
@property (nonatomic,copy) NSArray * previousItems; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getNowPlayingQueueDetailsResponse;
+(id)getNowPlayingQueueDetailsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)nextItems;
-(void)setNextItems:(NSArray *)arg1 ;
-(NSArray *)previousItems;
-(void)setPreviousItems:(NSArray *)arg1 ;
@end

