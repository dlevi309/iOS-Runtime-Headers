/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/SPSearchEntity.h>

@class NSString;

@interface SPAppSearchEntity : SPSearchEntity {

	NSString* _appName;

}

@property (retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(id)queryString;
-(id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 ;
-(BOOL)isPeopleSearch;
-(BOOL)isScopedAppSearch;
-(id)tokenText;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end

