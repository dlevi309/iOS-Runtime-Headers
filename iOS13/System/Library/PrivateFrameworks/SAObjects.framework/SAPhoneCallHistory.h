/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (nonatomic,copy) NSNumber * blocked; 
@property (nonatomic,copy) NSNumber * callCount; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
+(id)callHistory;
+(id)callHistoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)blocked;
-(void)setBlocked:(NSNumber *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)outgoing;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
-(NSNumber *)callCount;
-(void)setCallCount:(NSNumber *)arg1 ;
@end

