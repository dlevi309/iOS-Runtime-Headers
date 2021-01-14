/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject, CNUnfairLock;

@interface CNNameStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	CNUnfairLock* _lock;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;              //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * lock;                         //@synthesize lock=_lock - In the implementation block
+(id)tokenizeNameString:(id)arg1 ;
+(id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long*)arg3 ;
+(void)setInferredNameOrder:(long long*)arg1 toTokenizerNameOrder:(int)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(id)init;
-(CNUnfairLock *)lock;
-(CFStringTokenizerRef)tokenizer;
-(id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long*)arg2 ;
-(void)dealloc;
@end

