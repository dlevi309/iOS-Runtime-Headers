/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <LoginKit/LKLogEvent.h>

@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent {

	NSString* _keychainItemAdded;

}

@property (nonatomic,readonly) NSString * keychainItemAdded;              //@synthesize keychainItemAdded=_keychainItemAdded - In the implementation block
+(id)eventFromLKLogEvent:(id)arg1 ;
-(id)dictionary;
-(void)setKeychainItemAdded:(NSString *)arg1 ;
-(NSString *)keychainItemAdded;
@end

