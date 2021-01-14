/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSInternalHTTPCookie2Storage.h>

@class NSURL, NSString;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {

	sqlite3Ref persistentDb;
	sqlite3_stmtRef insertCookiesStmt;
	sqlite3_stmtRef selectDomainCookiesStmt;
	sqlite3_stmtRef selectAllCookiesStmt;
	sqlite3_stmtRef deleteCookiesStmt;
	sqlite3_stmtRef deleteAllCookiesStmt;
	NSURL* _path;

}

@property (retain) NSURL * path;                                    //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCookie:(id)arg1 ;
-(void)beginTransaction;
-(void)setCookies:(id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(id)init;
-(id)getAllCookies;
-(id)getCookiesWithFilter:(id)arg1 ;
-(void)deleteCookies:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)deleteCookiesWithFilter:(id)arg1 ;
-(void)deleteAllCookies;
-(void)setPath:(NSURL *)arg1 ;
-(void)commitTransaction;
-(NSURL *)path;
@end

