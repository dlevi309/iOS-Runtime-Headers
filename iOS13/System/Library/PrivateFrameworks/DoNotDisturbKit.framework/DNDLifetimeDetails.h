/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
*/

#import <DoNotDisturbKit/DoNotDisturbKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSString* _metadata;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                //@synthesize metadata=_metadata - In the implementation block
+(id)lifetimeDetailsForPlaceInference:(id)arg1 ;
+(id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2 ;
+(id)lifetimeDetailsForOneHour;
+(id)lifetimeDetailsUntilEvening;
+(id)lifetimeDetailsUntilMorning;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)metadata;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3 ;
@end

