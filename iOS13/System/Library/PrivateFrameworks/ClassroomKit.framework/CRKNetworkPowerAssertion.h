/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedInstance;
+(void)decrement;
+(void)increment;
-(id)init;
-(NSString *)name;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)decrement;
-(void)increment;
@end

