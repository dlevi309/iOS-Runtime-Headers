/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating> {

	NSString* _platform;

}

@property (nonatomic,copy,readonly) NSString * platform;              //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)platform;
-(id)initWithPlatform:(id)arg1 ;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
@end

