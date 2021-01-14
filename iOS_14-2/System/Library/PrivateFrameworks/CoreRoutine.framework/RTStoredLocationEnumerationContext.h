/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying> {

	RTStoredLocationEnumerationOptions* _options;
	unsigned long long _offset;

}

@property (nonatomic,copy,readonly) RTStoredLocationEnumerationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                                      //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(RTStoredLocationEnumerationOptions *)options;
-(id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)isEqualToContext:(id)arg1 ;
-(id)initWithEnumerationOptions:(id)arg1 ;
-(unsigned long long)offset;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

