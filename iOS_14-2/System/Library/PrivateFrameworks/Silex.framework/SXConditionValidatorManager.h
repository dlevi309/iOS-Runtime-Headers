/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXConditionValidatorManager.h>

@protocol SXConditionValidatorManager <NSObject>
@required
-(void)addConditionValidator:(id)arg1;

@end

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating> {

	NSMutableArray* _validators;

}

@property (nonatomic,readonly) NSMutableArray * validators;              //@synthesize validators=_validators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)validators;
-(void)addConditionValidator:(id)arg1 ;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
@end

