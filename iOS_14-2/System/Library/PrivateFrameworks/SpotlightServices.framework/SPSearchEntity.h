/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding> {

	BOOL _hasWords;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * tokenText; 
@property (readonly) NSString * queryString; 
@property (readonly) BOOL isPeopleSearch; 
@property (readonly) BOOL isScopedAppSearch; 
@property (assign) BOOL hasWords;                            //@synthesize hasWords=_hasWords - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)searchEntityWithContactIdentifier:(id)arg1 ;
+(id)searchEntityWithQueryString:(id)arg1 tokenText:(id)arg2 preferredBundleIDs:(id)arg3 ;
+(id)searchEntityWithBundleIdentifier:(id)arg1 appName:(id)arg2 ;
-(NSString *)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)tokenText;
-(BOOL)isPeopleSearch;
-(BOOL)isScopedAppSearch;
-(BOOL)hasWords;
-(void)setHasWords:(BOOL)arg1 ;
@end

