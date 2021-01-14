/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@interface WLSocketMessage : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)messageWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
@end

