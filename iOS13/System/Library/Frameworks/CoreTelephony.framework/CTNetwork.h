/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)plmn;
-(NSString *)rat;
-(void)setPlmn:(NSString *)arg1 ;
-(void)setRat:(NSString *)arg1 ;
@end

