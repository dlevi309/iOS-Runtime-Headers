/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface REMStoreInvocationValueStorage : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _valueStorage;

}

@property (nonatomic,retain) NSMutableDictionary * valueStorage;              //@synthesize valueStorage=_valueStorage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)storedPropertyForKey:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)valueStorage;
-(void)setValueStorage:(NSMutableDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)storeProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

