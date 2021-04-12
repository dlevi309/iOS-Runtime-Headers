/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {

	NSString* mName;
	EDKeyedCollection* mTableStyleElements;

}
+(id)tableStyle;
-(id)init;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(id)arg1 ;
-(id)tableStyleElements;
@end

