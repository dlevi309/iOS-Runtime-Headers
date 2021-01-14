/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMStreamValidating.h>

@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating> {

	NSArray* __validators;

}

@property (nonatomic,copy) NSArray * _validators;                   //@synthesize _validators=__validators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSArray *)_validators;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(void)set_validators:(NSArray *)arg1 ;
@end

