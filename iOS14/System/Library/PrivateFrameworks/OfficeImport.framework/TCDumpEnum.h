/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {

	NSString* mTypeName;
	NSMutableDictionary* mValueToNameMap;
	NSMutableDictionary* mNameToValueMap;

}
-(id)typeName;
-(id)valueForName:(id)arg1 ;
-(id)nameForValue:(int)arg1 ;
-(id)initWithTypeName:(id)arg1 pairs:(TCDumpEnumPair*)arg2 ;
@end

