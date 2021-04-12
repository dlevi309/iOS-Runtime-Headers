/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class TCDumpEnum;

@interface TCDumpNumeric : TCDumpType {

	int mType;
	TCDumpEnum* mEnumType;

}
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(void)fromXml:(xmlNode*)arg1 toBinary:(_sFILE*)arg2 state:(id)arg3 ;
-(id)initWithType:(int)arg1 enumType:(id)arg2 ;
-(id)enumType;
@end

