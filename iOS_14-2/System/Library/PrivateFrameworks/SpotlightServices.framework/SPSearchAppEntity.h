/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SPSearchEntity.h>

@class NSString;

@interface SPSearchAppEntity : SPSearchEntity {

	NSString* _appName;

}

@property (retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppName:(NSString *)arg1 ;
-(id)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(id)tokenText;
-(id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 ;
-(BOOL)isPeopleSearch;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end

