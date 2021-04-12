/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSError, NSString;

@interface PCProximityEvent : NSObject <NSSecureCoding> {

	BOOL _expectsDisplayContext;
	NSDictionary* _info;
	NSError* _error;
	long long _eventType;
	NSString* _mediaRemoteID;

}

@property (assign,nonatomic) BOOL expectsDisplayContext;                   //@synthesize expectsDisplayContext=_expectsDisplayContext - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long eventType;                        //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRemoteID;              //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)eventType;
-(NSString *)mediaRemoteID;
-(NSDictionary *)info;
-(BOOL)expectsDisplayContext;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 mediaRemoteID:(id)arg2 info:(id)arg3 ;
-(id)initWithError:(id)arg1 mediaRemoteID:(id)arg2 ;
-(void)setExpectsDisplayContext:(BOOL)arg1 ;
@end

