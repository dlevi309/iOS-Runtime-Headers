/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _preferredAddress;
	NSString* _principalPath;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
@property (nonatomic,retain) NSString * principalPath;                 //@synthesize principalPath=_principalPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSString *)preferredAddress;
-(void)setPreferredAddress:(NSString *)arg1 ;
@end

