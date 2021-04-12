/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)preservationPriority;
-(void)setPreservationPriority:(double)arg1 ;
-(BOOL)alwaysPreserved;
-(void)setAlwaysPreserved:(BOOL)arg1 ;
@end

