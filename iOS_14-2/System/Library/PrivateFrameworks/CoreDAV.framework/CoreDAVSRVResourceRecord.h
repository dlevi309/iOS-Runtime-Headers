/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPort:(NSNumber *)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSNumber *)port;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSNumber *)weight;
-(id)description;
-(NSString *)target;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
@end

