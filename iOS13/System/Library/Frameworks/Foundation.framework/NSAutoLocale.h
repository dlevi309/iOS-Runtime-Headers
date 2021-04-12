/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(id)objectForKey:(id)arg1 ;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)_prefs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)_init;
-(void)_update:(id)arg1 ;
@end

