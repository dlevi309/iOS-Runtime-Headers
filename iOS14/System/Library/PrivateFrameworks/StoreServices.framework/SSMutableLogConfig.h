/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSLogConfig.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSMutableLogConfig : SSLogConfig <NSCopying>

@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) unsigned long long environment; 
@property (nonatomic,copy) NSString * outputDirectory; 
@property (nonatomic,copy) NSString * outputFilename; 
@property (nonatomic,copy) NSString * subsystem; 
@property (assign,nonatomic) BOOL writeToDisk; 
@end

