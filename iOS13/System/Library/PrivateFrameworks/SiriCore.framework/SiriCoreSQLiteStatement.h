/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreSQLiteStatement : NSObject {

	sqlite3_stmtRef _impl;
	BOOL _finalizeWhenDone;

}
-(void)dealloc;
-(void)reset;
-(sqlite3_stmtRef)impl;
-(void)clearBindings;
-(id)initWithImpl:(sqlite3_stmtRef)arg1 finalizeWhenDone:(BOOL)arg2 ;
@end

