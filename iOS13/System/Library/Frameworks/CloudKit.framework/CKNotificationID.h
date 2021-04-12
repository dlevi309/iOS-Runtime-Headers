/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) NSString * notificationUUID;              //@synthesize notificationUUID=_notificationUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setNotificationUUID:(NSString *)arg1 ;
-(NSString *)notificationUUID;
-(id)CKXPCSuitableString;
@end

