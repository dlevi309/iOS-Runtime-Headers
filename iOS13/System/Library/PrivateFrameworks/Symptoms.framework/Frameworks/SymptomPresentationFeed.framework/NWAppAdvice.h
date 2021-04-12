/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/

#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAppAdvice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	long long _state;
	NSString* _reason;

}

@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long state;                          //@synthesize state=_state - In the implementation block
@property (retain) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)bundleIdentifier;
-(long long)state;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

