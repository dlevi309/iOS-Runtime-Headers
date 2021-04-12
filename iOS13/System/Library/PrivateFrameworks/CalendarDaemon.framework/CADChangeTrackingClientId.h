/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding> {

	NSString* _suffix;
	NSString* _customClientId;

}

@property (nonatomic,readonly) NSString * suffix;                      //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,readonly) NSString * customClientId;              //@synthesize customClientId=_customClientId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomClientId; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)clientId;
-(id)initWithSuffix:(id)arg1 ;
-(NSString *)suffix;
-(NSString *)customClientId;
-(id)initWithCustomClientId:(id)arg1 ;
-(BOOL)isEqualToChangeTrackingClientId:(id)arg1 ;
-(BOOL)hasCustomClientId;
-(id)clientIdWithBundleId:(id)arg1 ;
@end

