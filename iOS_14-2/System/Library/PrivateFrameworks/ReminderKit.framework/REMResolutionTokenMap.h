/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface REMResolutionTokenMap : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _map;

}

@property (nonatomic,retain) NSMutableDictionary * map;              //@synthesize map=_map - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mapWithData:(id)arg1 ;
+(id)resolutionTokenMapWithJSONData:(id)arg1 keyMap:(id)arg2 ;
-(long long)compare:(id)arg1 forKey:(id)arg2 ;
-(long long)compareAndMergeWithMap:(id)arg1 forKey:(id)arg2 ;
-(void)initTokenWithDefaultValueIfNecessaryForKey:(id)arg1 ;
-(BOOL)mergeWithMap:(id)arg1 forKey:(id)arg2 ;
-(id)getTokenForKey:(id)arg1 ;
-(void)setToken:(id)arg1 forKey:(id)arg2 ;
-(id)getTokenKeys;
-(void)setMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSMutableDictionary *)map;
-(id)initWithCoder:(id)arg1 ;
-(void)updateForKey:(id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)archivedData;
-(BOOL)isEqual:(id)arg1 ;
@end

