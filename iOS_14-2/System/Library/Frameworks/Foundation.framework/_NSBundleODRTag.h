/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _NSBundleODRTag : NSObject <NSSecureCoding> {

	double _preservationPriority;
	BOOL _alwaysPreserved;

}

@property (assign) double preservationPriority;              //@synthesize preservationPriority=_preservationPriority - In the implementation block
@property (assign) BOOL alwaysPreserved;                     //@synthesize alwaysPreserved=_alwaysPreserved - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPreservationPriority:(double)arg1 ;
-(BOOL)alwaysPreserved;
-(double)preservationPriority;
-(void)setAlwaysPreserved:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

