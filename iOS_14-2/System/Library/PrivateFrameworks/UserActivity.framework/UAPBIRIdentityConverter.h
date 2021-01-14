/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAPBIRConverter.h>

@class NSString;

@interface UAPBIRIdentityConverter : NSObject <UAPBIRConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerConverter;
-(id)typeString;
-(id)convertPlatformDataToIR:(id)arg1 ;
-(id)convertIRDataToPlatform:(id)arg1 ;
@end

