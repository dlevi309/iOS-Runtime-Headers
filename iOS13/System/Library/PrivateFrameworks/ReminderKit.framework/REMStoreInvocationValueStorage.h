/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)storedPropertyForKey:(id)arg1 ;
-(NSMutableDictionary *)valueStorage;
-(void)setValueStorage:(NSMutableDictionary *)arg1 ;
-(void)storeProperty:(id)arg1 forKey:(id)arg2 ;
@end

