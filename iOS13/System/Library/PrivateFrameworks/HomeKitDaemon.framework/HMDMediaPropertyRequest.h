/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMDMediaProfile;

@interface HMDMediaPropertyRequest : HMFObject {

	NSString* _property;
	HMDMediaProfile* _mediaProfile;
	id _previousValue;

}

@property (nonatomic,readonly) NSString * property;                         //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) HMDMediaProfile * mediaProfile;              //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) id previousValue;                            //@synthesize previousValue=_previousValue - In the implementation block
+(id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(id)serializeReadRequests:(id)arg1 ;
+(id)deserializeReadRequests:(id)arg1 mediaProfile:(id)arg2 ;
-(id)description;
-(id)previousValue;
-(NSString *)property;
-(HMDMediaProfile *)mediaProfile;
-(id)initWithProperty:(id)arg1 mediaProfile:(id)arg2 ;
@end

