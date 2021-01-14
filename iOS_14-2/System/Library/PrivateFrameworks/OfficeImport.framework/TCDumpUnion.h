/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpNumeric, NSMutableDictionary;

@interface TCDumpUnion : TCDumpType {

	NSString* mSelectorFieldName;
	TCDumpNumeric* mSelectorField;
	NSMutableDictionary* mSelectorToMemberMap;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 selectorField:(id)arg3 members:(id)arg4 ;
-(id)initWithSelectorFieldName:(id)arg1 selectorEnumType:(id)arg2 members:(id)arg3 ;
-(id)initWithSelectorField:(id)arg1 members:(id)arg2 ;
@end

