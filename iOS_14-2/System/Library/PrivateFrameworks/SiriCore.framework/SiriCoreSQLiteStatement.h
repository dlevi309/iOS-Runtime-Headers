/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreSQLiteStatement : NSObject {

	sqlite3_stmtRef _impl;
	BOOL _finalizeWhenDone;

}
-(void)clearBindings;
-(id)initWithImpl:(sqlite3_stmtRef)arg1 finalizeWhenDone:(BOOL)arg2 ;
-(void)reset;
-(void)dealloc;
-(sqlite3_stmtRef)impl;
@end

