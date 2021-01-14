/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <WelcomeKitCore/WLSocketMessage.h>

@class NSString;

@interface WLSocketCommandMessage : WLSocketMessage {

	NSString* _command;

}

@property (nonatomic,copy) NSString * command;              //@synthesize command=_command - In the implementation block
-(NSString *)command;
-(void)setCommand:(NSString *)arg1 ;
-(id)initWithCommandString:(id)arg1 ;
@end

