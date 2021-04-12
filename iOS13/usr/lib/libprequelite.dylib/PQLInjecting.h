/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libprequelite.dylib
*/

@class NSData;


@protocol PQLInjecting <NSObject>
@property (nonatomic,readonly) NSData * sql; 
@optional
-(id)bindValuesToKeepAlive;

@required
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2;

@end

