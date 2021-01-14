/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface DKCanonicalVersion : NSObject <NSCopying, NSSecureCoding> {

	NSString* _string;
	NSArray* _parts;

}

@property (retain) NSArray * parts;                            //@synthesize parts=_parts - In the implementation block
@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)canonicalVersionWithString:(id)arg1 ;
-(NSArray *)parts;
-(id)initWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setParts:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_parseParts:(id)arg1 ;
-(BOOL)isEqualToCanonicalVersion:(id)arg1 ;
@end

