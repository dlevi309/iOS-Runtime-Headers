/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


#import <LoginKit/LoginKit-Structs.h>
@class NSString, NSDate;

@interface LKLogEvent : NSObject {

	NSString* _process;
	NSDate* _date;
	NSString* _senderImagePath;
	NSString* _composedMessage;
	unsigned long long _activityIdentifier;

}

@property (nonatomic,readonly) NSString * process;                                 //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * senderImagePath;                         //@synthesize senderImagePath=_senderImagePath - In the implementation block
@property (nonatomic,readonly) NSString * composedMessage;                         //@synthesize composedMessage=_composedMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)dictionary;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(unsigned long long)activityIdentifier;
-(void)setActivityIdentifier:(unsigned long long)arg1 ;
-(NSString *)composedMessage;
-(NSString *)senderImagePath;
-(BOOL)loggedByFramework:(id)arg1 ;
-(BOOL)loggedByProcess:(id)arg1 ;
-(BOOL)containsMessage:(id)arg1 ;
-(void)setComposedMessage:(NSString *)arg1 ;
-(void)setSenderImagePath:(NSString *)arg1 ;
@end

