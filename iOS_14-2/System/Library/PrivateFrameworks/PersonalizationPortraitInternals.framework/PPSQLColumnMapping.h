/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString;

@interface PPSQLColumnMapping : NSObject {

	const PPCompactStringArrayRef _columnAliases;
	const PPCompactStringArrayRef _tableColumnNamesFromSchema;
	NSString* _uniqueTableName;

}
-(id)initWithStatement:(id)arg1 ;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
-(void)dealloc;
@end

