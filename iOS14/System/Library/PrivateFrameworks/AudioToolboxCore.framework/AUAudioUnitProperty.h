/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _v2propID;
	unsigned _scope;
	unsigned _element;

}
+(BOOL)supportsSecureCoding;
+(id)propertyWithKey:(id)arg1 ;
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
+(id)propertyWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(id)initWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(id)initWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

