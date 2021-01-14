/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInsertionCacheValidator.h>

@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) id block;                            //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(BOOL)validateCache:(id)arg1 DOMObjectProvider:(id)arg2 ;
@end

