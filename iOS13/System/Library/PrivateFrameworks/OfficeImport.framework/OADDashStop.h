/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADDashStop : NSObject <NSCopying> {

	float mDash;
	float mSpace;

}
+(void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)space;
-(float)dash;
-(id)initWithDash:(float)arg1 space:(float)arg2 ;
@end

