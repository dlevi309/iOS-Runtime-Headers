/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compatibilityVersion;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
@end

