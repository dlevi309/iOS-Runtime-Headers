/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/CLNotifierServiceClientProtocol.h>

@class NSString;

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {

	CLNotifierClientBase* _client;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(NSString *)debugDescription;
-(BOOL)valid;
-(void)invalidate;
-(void)onNotification:(int)arg1 withData:(id)arg2 ;
-(id)initWithClient:(CLNotifierClientBase*)arg1 ;
@end

