/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface TCDumpType : NSObject {

	NSString* mName;

}
-(id)init;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(void)fromXml:(xmlNode*)arg1 toBinary:(_sFILE*)arg2 state:(id)arg3 ;
@end

