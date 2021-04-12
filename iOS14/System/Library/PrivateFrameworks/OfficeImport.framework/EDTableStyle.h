/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)name;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tableStyleElements;
@end

