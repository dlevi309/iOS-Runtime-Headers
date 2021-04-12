/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

