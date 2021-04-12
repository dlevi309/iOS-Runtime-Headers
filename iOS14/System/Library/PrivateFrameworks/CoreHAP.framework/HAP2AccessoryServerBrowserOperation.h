/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>

@class NSMutableSet, NSError;

@interface HAP2AccessoryServerBrowserOperation : HAP2LoggingObject {

	unsigned long long _type;
	NSMutableSet* _pendingCoordinators;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingCoordinators;              //@synthesize pendingCoordinators=_pendingCoordinators - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned long long)type;
-(NSMutableSet *)pendingCoordinators;
-(void)setPendingCoordinators:(NSMutableSet *)arg1 ;
@end

