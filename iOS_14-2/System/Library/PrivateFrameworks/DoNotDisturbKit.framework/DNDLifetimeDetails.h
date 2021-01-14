/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)lifetimeDetailsUntilMorning;
+(id)lifetimeDetailsForOneHour;
+(id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2 ;
+(id)lifetimeDetailsUntilEvening;
+(id)lifetimeDetailsForPlaceInference:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

