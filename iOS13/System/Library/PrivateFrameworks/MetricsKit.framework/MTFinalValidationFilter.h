/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

