/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CoreFoundation/NSArray.h>

@protocol SYChangeSerializer;
@class NSArray;

@interface _SYLazyChangeArray : NSArray {

	NSArray* _source;
	NSArray* _types;
	id<SYChangeSerializer> _decoder;
	BOOL _isSYObjectDataArray;
	long long _compatibilityVersion;

}

@property (assign,nonatomic) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(long long)compatibilityVersion;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
@end

