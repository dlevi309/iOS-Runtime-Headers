/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PACountedSampleFrame.h>

@class NSString, NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame {

	unsigned long long _state;
	NSString* _waitInfoString;
	NSMutableSet* _children;

}

@property (__weak,readonly) NSMutableSet * children; 
@property (readonly) BOOL isLeafFrame; 
@property (assign) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (retain) NSString * waitInfoString;                     //@synthesize waitInfoString=_waitInfoString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableSet *)children;
-(BOOL)isLeafFrame;
-(NSString *)waitInfoString;
-(id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 andWaitInfoString:(id)arg3 ;
-(void)setWaitInfoString:(NSString *)arg1 ;
@end

