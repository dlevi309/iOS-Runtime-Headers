/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(unsigned long long)bagValueType;
-(NSString *)bagKey;
@end

