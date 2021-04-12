/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(id)description;
-(NSNumber *)port;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setPort:(NSNumber *)arg1 ;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSNumber *)weight;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
@end

