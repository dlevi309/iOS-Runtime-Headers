/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString;

@interface PPSQLColumnMapping : NSObject {

	const PPCompactStringArrayRef _columnAliases;
	const PPCompactStringArrayRef _tableColumnNamesFromSchema;
	NSString* _uniqueTableName;

}
-(void)dealloc;
-(id)initWithStatement:(id)arg1 ;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
@end

