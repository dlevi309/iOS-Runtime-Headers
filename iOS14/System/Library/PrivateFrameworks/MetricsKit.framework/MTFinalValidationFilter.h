/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/MTEventFilter.h>

@class NSString;

@interface MTFinalValidationFilter : MTObject <MTEventFilter> {

	BOOL _shouldApplyDeRes;

}

@property (assign,nonatomic) BOOL shouldApplyDeRes;                 //@synthesize shouldApplyDeRes=_shouldApplyDeRes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)apply:(id)arg1 ;
-(BOOL)shouldApplyDeRes;
-(void)validateFields:(id)arg1 ;
-(void)setShouldApplyDeRes:(BOOL)arg1 ;
@end

