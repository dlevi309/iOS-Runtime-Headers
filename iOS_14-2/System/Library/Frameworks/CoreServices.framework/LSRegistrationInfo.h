/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface LSRegistrationInfo : NSObject <NSSecureCoding, NSMutableCopying> {

	unsigned version;
	unsigned action;
	unsigned options;
	unsigned itemFlags;
	unsigned containerUnit;
	unsigned bundleUnit;
	unsigned bundleClass;
	unsigned long long inoBundle;
	unsigned long long inoExec;
	double contentModDate;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

