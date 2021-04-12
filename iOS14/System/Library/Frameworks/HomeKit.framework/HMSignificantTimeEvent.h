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

@class NSString, NSDateComponents;

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,retain) NSDateComponents * offset;                //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 ;
-(void)_update:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 ;
-(void)updateOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)offset;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(void)setOffset:(NSDateComponents *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)significantEvent;
@end

