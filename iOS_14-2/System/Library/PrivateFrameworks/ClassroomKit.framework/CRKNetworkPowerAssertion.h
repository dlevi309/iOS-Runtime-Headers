/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {

	unsigned mPowerAssertion;
	NSString* _name;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
+(void)decrement;
+(id)sharedInstance;
+(void)increment;
-(void)decrement;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSString *)name;
-(void)increment;
@end

