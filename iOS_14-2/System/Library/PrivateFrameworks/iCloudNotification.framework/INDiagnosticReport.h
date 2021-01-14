/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate;

@interface INDiagnosticReport : NSObject <NSSecureCoding> {

	BOOL _disabled;
	NSString* _pushEnvironment;
	NSString* _pushToken;
	NSArray* _pushTopics;
	NSDate* _nextHeartbeatDate;

}

@property (nonatomic,copy) NSString * pushEnvironment;              //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                    //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSArray * pushTopics;                    //@synthesize pushTopics=_pushTopics - In the implementation block
@property (nonatomic,copy) NSDate * nextHeartbeatDate;              //@synthesize nextHeartbeatDate=_nextHeartbeatDate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)pushToken;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)pushEnvironment;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)disabled;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(NSArray *)pushTopics;
-(void)setPushTopics:(NSArray *)arg1 ;
-(NSDate *)nextHeartbeatDate;
-(void)setNextHeartbeatDate:(NSDate *)arg1 ;
@end

