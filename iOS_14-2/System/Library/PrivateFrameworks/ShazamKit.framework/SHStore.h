/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@interface SHStore : NSObject

@property (nonatomic,readonly) double minimumSignatureLength; 
@property (nonatomic,readonly) double maximumSignatureLength; 
-(id)deviceModel;
-(void)preload;
-(id)deviceProductVersion;
-(id)deviceOSVersion;
-(id)_init;
-(id)systemInfoByName:(char*)arg1 ;
-(double)minimumSignatureLength;
-(double)maximumSignatureLength;
-(id)frameworkShortVersion;
-(id)deviceSystemName;
-(id)createMatcher;
@end

