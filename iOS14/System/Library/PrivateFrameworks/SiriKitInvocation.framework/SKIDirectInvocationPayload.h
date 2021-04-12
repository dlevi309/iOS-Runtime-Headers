/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
*/


@class NSString, NSDictionary;

@interface SKIDirectInvocationPayload : NSObject {

	NSString* _identifier;
	NSDictionary* _userData;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * userData;                     //@synthesize userData=_userData - In the implementation block
-(NSDictionary *)userData;
-(void)setUserData:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

