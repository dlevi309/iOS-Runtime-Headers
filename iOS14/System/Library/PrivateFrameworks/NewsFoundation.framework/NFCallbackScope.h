/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

