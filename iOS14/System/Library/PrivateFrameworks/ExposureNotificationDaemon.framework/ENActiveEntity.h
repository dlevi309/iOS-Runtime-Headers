/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENEntity;

@interface ENActiveEntity : NSObject <NSSecureCoding, NSCopying> {

	int _activeStatus;
	ENEntity* _entity;

}

@property (nonatomic,copy) ENEntity * entity;               //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) int activeStatus;              //@synthesize activeStatus=_activeStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEntity:(ENEntity *)arg1 ;
-(ENEntity *)entity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActiveStatus:(int)arg1 ;
-(int)activeStatus;
-(id)initWithEntity:(id)arg1 activeStatus:(int)arg2 ;
@end

