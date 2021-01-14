/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTNetwork : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _plmn;
	NSString* _rat;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * plmn;              //@synthesize plmn=_plmn - In the implementation block
@property (nonatomic,retain) NSString * rat;               //@synthesize rat=_rat - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)rat;
-(NSString *)plmn;
-(void)setRat:(NSString *)arg1 ;
-(void)setPlmn:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

