/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXHints.h>

@protocol SXHints <NSObject>
@property (nonatomic,readonly) id<SXConditionHints> conditions; 
@property (nonatomic,readonly) id<SXConditionalHints> conditionals; 
@required
-(id<SXConditionHints>)conditions;
-(id<SXConditionalHints>)conditionals;

@end


@class NSString;

@interface SXHints : SXJSONObject <SXHints>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXConditionHints> conditions; 
@property (nonatomic,readonly) id<SXConditionalHints> conditionals; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXConditionalHints>)conditionals;
-(id<SXConditionHints>)conditions;
@end

