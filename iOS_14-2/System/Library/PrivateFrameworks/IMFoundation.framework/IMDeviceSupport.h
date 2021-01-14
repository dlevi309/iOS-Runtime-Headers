/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {

	NSString* _model;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
+(id)sharedInstance;
+(id)marketingNameForModel:(id)arg1 ;
-(NSString *)productName;
-(NSString *)model;
-(id)init;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)deviceInformationString;
-(NSString *)userAgentString;
-(void)_generateProductInformation;
@end

