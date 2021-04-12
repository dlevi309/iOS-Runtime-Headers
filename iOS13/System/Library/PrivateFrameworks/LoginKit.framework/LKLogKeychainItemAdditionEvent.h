/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

