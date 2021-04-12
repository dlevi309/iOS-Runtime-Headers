/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DNDClientEventSource;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	DNDClientEventSource* _source;
	BOOL _shouldAlwaysInterrupt;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) DNDClientEventSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysInterrupt;                      //@synthesize shouldAlwaysInterrupt=_shouldAlwaysInterrupt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(DNDClientEventSource *)source;
-(id)_initWithDetails:(id)arg1 ;
-(BOOL)shouldAlwaysInterrupt;
-(id)_initWithIdentifier:(id)arg1 source:(id)arg2 shouldAlwaysInterrupt:(BOOL)arg3 ;
@end

