/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSString;

@interface SXSpecVersionConditionValidator : NSObject <SXConditionValidating> {

	NSString* _specVersion;

}

@property (nonatomic,copy,readonly) NSString * specVersion;              //@synthesize specVersion=_specVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpecVersion:(id)arg1 ;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
-(NSString *)specVersion;
@end

