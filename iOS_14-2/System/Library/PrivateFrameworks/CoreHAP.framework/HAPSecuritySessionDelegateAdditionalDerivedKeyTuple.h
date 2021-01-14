/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@class NSString, NSData;

@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject {

	NSString* _name;
	NSData* _saltData;
	NSData* _infoData;

}

@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * saltData;              //@synthesize saltData=_saltData - In the implementation block
@property (nonatomic,readonly) NSData * infoData;              //@synthesize infoData=_infoData - In the implementation block
+(id)new;
-(id)init;
-(NSString *)name;
-(NSData *)saltData;
-(NSData *)infoData;
-(id)initWithName:(id)arg1 saltData:(id)arg2 infoData:(id)arg3 ;
@end

