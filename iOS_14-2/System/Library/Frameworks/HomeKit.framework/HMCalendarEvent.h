/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSDateComponents* _fireDateComponents;

}

@property (nonatomic,retain) NSDateComponents * fireDateComponents;              //@synthesize fireDateComponents=_fireDateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 fireDateComponents:(id)arg2 ;
-(void)setFireDateComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)fireDateComponents;
-(void)_updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFireDateComponents:(id)arg1 ;
-(void)updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

