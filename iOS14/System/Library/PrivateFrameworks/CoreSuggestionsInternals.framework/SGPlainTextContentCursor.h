/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSIndexSet;

@interface SGPlainTextContentCursor : NSObject {

	NSIndexSet* _quoted;
	CFStringRef _str;
	unsigned long long _len;
	SCD_Struct_SG34* _ib;
	unsigned long long _pos;

}

@property (assign,nonatomic) unsigned long long pos;              //@synthesize pos=_pos - In the implementation block
-(id)init;
-(void)setPos:(unsigned long long)arg1 ;
-(unsigned long long)pos;
-(BOOL)forward;
-(void)dealloc;
-(id)initWithMailMessage:(id)arg1 ;
-(BOOL)backward;
-(void)forwardWhile:(/*^block*/id)arg1 ;
-(void)backwardWhile:(/*^block*/id)arg1 ;
-(BOOL)forwardToString:(id)arg1 consume:(BOOL)arg2 ;
-(BOOL)backwardToString:(id)arg1 consume:(BOOL)arg2 ;
-(void)seekToStart;
-(void)seekToEnd;
@end

