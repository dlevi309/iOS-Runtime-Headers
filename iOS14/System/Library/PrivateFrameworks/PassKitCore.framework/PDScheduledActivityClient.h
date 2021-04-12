/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PDScheduledActivityClient, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding> {

	id<PDScheduledActivityClient> _clientInstance;
	NSObject*<OS_dispatch_queue> _activityQueue;
	NSMutableDictionary* _activityRegistrations;

}

@property (assign,nonatomic,__weak) id<PDScheduledActivityClient> clientInstance;              //@synthesize clientInstance=_clientInstance - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;                       //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityRegistrations;                      //@synthesize activityRegistrations=_activityRegistrations - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(id<PDScheduledActivityClient>)clientInstance;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2 ;
-(BOOL)isValid;
-(NSMutableDictionary *)activityRegistrations;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityRegistrations:(NSMutableDictionary *)arg1 ;
-(void)setClientInstance:(id<PDScheduledActivityClient>)arg1 ;
@end

