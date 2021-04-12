/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)map;
-(id)initWithMap:(id)arg1 ;
-(id)archivedData;
-(void)setMap:(NSMutableDictionary *)arg1 ;
-(void)updateForKey:(id)arg1 ;
-(long long)compare:(id)arg1 forKey:(id)arg2 ;
-(long long)compareAndMergeWithMap:(id)arg1 forKey:(id)arg2 ;
-(void)initTokenWithDefaultValueIfNecessaryForKey:(id)arg1 ;
-(BOOL)mergeWithMap:(id)arg1 forKey:(id)arg2 ;
-(id)getTokenForKey:(id)arg1 ;
-(void)setToken:(id)arg1 forKey:(id)arg2 ;
-(id)getTokenKeys;
@end

