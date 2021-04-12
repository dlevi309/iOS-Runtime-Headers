/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/


@interface _SWCPatternMatchingResult : NSObject {

	BOOL _excluded;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (getter=isExcluded,nonatomic,readonly) BOOL excluded;              //@synthesize excluded=_excluded - In the implementation block
+(id)new;
-(unsigned long long)index;
-(id)init;
-(BOOL)isExcluded;
-(id)_initWithIndex:(unsigned long long)arg1 excluded:(BOOL)arg2 ;
@end

