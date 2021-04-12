/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(void)invoke;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)isInvoked;
-(void)addInvocationBlock:(/*^block*/id)arg1 ;
-(void)removeAllInvocationBlocks;
-(id)_nts_consumeBlocks;
-(void)addInvocable:(id)arg1 ;
@end

