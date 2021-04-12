/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <CoreFoundation/NSEnumerator.h>

@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {

	WBSSQLiteStatement* _statement;
	WBSSQLiteRow* _row;
	int _lastResultCode;

}

@property (nonatomic,readonly) WBSSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) int lastResultCode;                          //@synthesize lastResultCode=_lastResultCode - In the implementation block
-(id)nextObject;
-(WBSSQLiteStatement *)statement;
-(id)initWithResultsOfStatement:(id)arg1 ;
-(int)lastResultCode;
@end

