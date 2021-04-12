/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <WelcomeKitCore/WLSocketMessage.h>

@interface WLSocketVersionMessage : WLSocketMessage {

	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
-(id)initWithVersion:(unsigned long long)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
@end

