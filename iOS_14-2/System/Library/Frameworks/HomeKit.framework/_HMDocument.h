/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface _HMDocument : NSObject <NSCopying> {

	NSString* _stringValue;
	NSAttributedString* _attributedString;

}

@property (copy,readonly) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
-(id)initWithString:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSAttributedString *)attributedString;
-(NSString *)stringValue;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

