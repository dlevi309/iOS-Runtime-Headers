/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSArray;

@interface NFCallbackScope : NSObject {

	unsigned long long _scope;
	NSArray* _names;

}

@property (nonatomic,readonly) unsigned long long scope;              //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSArray * names;                       //@synthesize names=_names - In the implementation block
-(unsigned long long)scope;
-(NSArray *)names;
-(id)initWithScope:(unsigned long long)arg1 names:(id)arg2 ;
@end

