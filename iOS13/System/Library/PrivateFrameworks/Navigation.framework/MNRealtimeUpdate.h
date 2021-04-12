/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSUUID *)routeID;
-(NSDate *)lastUpdated;
@end

