/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)outgoing;
-(id)encodedClassName;
-(NSNumber *)missed;
-(NSNumber *)blocked;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setCallCount:(NSNumber *)arg1 ;
-(NSNumber *)callCount;
-(NSNumber *)faceTime;
-(void)setBlocked:(NSNumber *)arg1 ;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(void)setMissed:(NSNumber *)arg1 ;
@end

