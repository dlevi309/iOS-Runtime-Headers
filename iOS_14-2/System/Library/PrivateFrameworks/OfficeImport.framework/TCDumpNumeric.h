/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class TCDumpEnum;

@interface TCDumpNumeric : TCDumpType {

	int mType;
	TCDumpEnum* mEnumType;

}
-(id)initWithType:(int)arg1 ;
-(int)type;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(void)fromXml:(xmlNode*)arg1 toBinary:(_sFILE*)arg2 state:(id)arg3 ;
-(id)initWithType:(int)arg1 enumType:(id)arg2 ;
-(id)enumType;
@end

