/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString;

@interface BYDeviceConfiguration : NSObject {

	NSString* _productVersion;

}

@property (assign,nonatomic) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
+(id)currentConfiguration;
-(id)init;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
@end

