/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSError;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding> {

	NSUUID* _routeID;
	NSDate* _lastUpdated;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * routeID;                  //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSUUID *)routeID;
-(id)initWithCoder:(id)arg1 ;
@end

