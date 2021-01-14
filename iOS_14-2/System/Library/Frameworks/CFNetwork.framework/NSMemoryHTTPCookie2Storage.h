/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSInternalHTTPCookie2Storage.h>

@class NSMutableDictionary, NSString;

@interface NSMemoryHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {

	NSMutableDictionary* memoryCookies;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCookie:(id)arg1 ;
-(void)setCookies:(id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(id)init;
-(id)getAllCookies;
-(id)getCookiesWithFilter:(id)arg1 ;
-(void)deleteCookies:(id)arg1 ;
-(void)deleteCookiesWithFilter:(id)arg1 ;
-(void)deleteAllCookies;
@end

