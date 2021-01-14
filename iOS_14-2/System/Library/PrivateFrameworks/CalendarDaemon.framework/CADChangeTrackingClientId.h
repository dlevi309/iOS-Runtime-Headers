/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)customClientId;
-(id)clientIdWithBundleId:(id)arg1 ;
-(id)initWithCustomClientId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)suffix;
-(id)description;
-(id)clientId;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToChangeTrackingClientId:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSuffix:(id)arg1 ;
-(BOOL)hasCustomClientId;
@end

