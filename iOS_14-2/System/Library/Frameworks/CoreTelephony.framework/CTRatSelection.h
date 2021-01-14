/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _mask;
	NSString* _selection;
	NSString* _preferred;

}

@property (assign,nonatomic) unsigned char mask;                //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) NSString * selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,retain) NSString * preferred;              //@synthesize preferred=_preferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)preferred;
-(unsigned char)mask;
-(void)setMask:(unsigned char)arg1 ;
-(void)setPreferred:(NSString *)arg1 ;
-(void)setSelection:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)selection;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

