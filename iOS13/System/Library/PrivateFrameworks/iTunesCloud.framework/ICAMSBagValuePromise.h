/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <AppleMediaServices/AMSPromise.h>

@class NSString;

@interface ICAMSBagValuePromise : AMSPromise {

	NSString* _bagKey;
	unsigned long long _bagValueType;

}

@property (nonatomic,copy,readonly) NSString * bagKey;                       //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,readonly) unsigned long long bagValueType;              //@synthesize bagValueType=_bagValueType - In the implementation block
-(NSString *)bagKey;
-(id)initWithBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(unsigned long long)bagValueType;
@end

