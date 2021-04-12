/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSLocale.h>

@class NSLocale;

@interface NSAutoLocale : NSLocale {

	NSLocale* loc;
	opaque_pthread_mutex_t _lock;

}
+(BOOL)supportsSecureCoding;
-(void)_update:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(void)finalize;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned char)_nullLocale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_prefs;
-(void)_setNullLocale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

