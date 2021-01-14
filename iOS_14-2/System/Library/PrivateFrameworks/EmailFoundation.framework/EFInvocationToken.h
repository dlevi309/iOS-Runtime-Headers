/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFInvocable.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject <EFInvocable> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isInvoked;
	NSString* _label;

}

@property (getter=isInvoked,readonly) BOOL invoked; 
@property (nonatomic,copy,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionString;
+(id)tokenWithLabel:(id)arg1 invocationBlock:(/*^block*/id)arg2 ;
+(id)tokenWithInvocationBlock:(/*^block*/id)arg1 ;
-(void)invoke;
-(id)init;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)isInvoked;
-(id)_nts_consumeBlocks;
-(NSString *)description;
-(id)initWithInvocationBlock:(/*^block*/id)arg1 ;
-(void)addInvocable:(id)arg1 ;
-(void)removeAllInvocationBlocks;
-(NSString *)label;
-(void)addInvocationBlock:(/*^block*/id)arg1 ;
@end

