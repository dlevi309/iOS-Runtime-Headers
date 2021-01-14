/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding> {

	NSString* _unique_id;
	NSString* _text;

}

@property (nonatomic,retain) NSString * unique_id;              //@synthesize unique_id=_unique_id - In the implementation block
@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)unique_id;
-(void)setUnique_id:(NSString *)arg1 ;
-(id)initWithId:(id)arg1 andText:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

