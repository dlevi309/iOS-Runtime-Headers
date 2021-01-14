/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding> {

	NSString* _notificationUUID;

}

@property (nonatomic,copy,readonly) NSString * notificationUUID;              //@synthesize notificationUUID=_notificationUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithNotificationUUID:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)notificationUUID;
-(id)description;
-(id)CKXPCSuitableString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

