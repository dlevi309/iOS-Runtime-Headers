/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

