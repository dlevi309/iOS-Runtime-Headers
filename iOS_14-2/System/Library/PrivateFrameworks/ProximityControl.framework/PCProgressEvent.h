/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString;

@interface PCProgressEvent : NSObject <NSSecureCoding> {

	NSError* _error;
	long long _eventType;
	NSString* _mediaRemoteID;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long eventType;               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteID;              //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)eventType;
-(NSString *)mediaRemoteID;
-(id)initWithError:(id)arg1 ;
-(id)initWithEventType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)setMediaRemoteID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

