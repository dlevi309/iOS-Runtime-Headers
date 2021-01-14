/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSString, NSArray;

@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _accessModeChangeNotificationEnabled;
	BOOL _reachabilityEventNotificationEnabled;
	BOOL _smartBulletinBoardNotificationEnabled;
	NSPredicate* _smartBulletinBoardNotificationCondition;

}

@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;                  //@synthesize accessModeChangeNotificationEnabled=_accessModeChangeNotificationEnabled - In the implementation block
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;                //@synthesize reachabilityEventNotificationEnabled=_reachabilityEventNotificationEnabled - In the implementation block
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled;              //@synthesize smartBulletinBoardNotificationEnabled=_smartBulletinBoardNotificationEnabled - In the implementation block
@property (copy) NSPredicate * smartBulletinBoardNotificationCondition;                                             //@synthesize smartBulletinBoardNotificationCondition=_smartBulletinBoardNotificationCondition - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(BOOL)isAccessModeChangeNotificationEnabled;
-(BOOL)isReachabilityEventNotificationEnabled;
-(BOOL)isSmartBulletinBoardNotificationEnabled;
-(NSPredicate *)smartBulletinBoardNotificationCondition;
-(void)setAccessModeChangeNotificationEnabled:(BOOL)arg1 ;
-(void)setReachabilityEventNotificationEnabled:(BOOL)arg1 ;
-(void)setSmartBulletinBoardNotificationEnabled:(BOOL)arg1 ;
-(void)setSmartBulletinBoardNotificationCondition:(NSPredicate *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

