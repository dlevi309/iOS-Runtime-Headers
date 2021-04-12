/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {

	unsigned _flags;
	NSString* _persistentIdentifier;

}

@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)persistentIdentifier;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(unsigned)updateWithEndpoint:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

