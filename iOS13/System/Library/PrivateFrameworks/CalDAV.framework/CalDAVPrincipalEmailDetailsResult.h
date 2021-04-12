/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/


@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSURL* _principalURL;
	NSString* _displayName;
	NSSet* _preferredAddresses;

}

@property (nonatomic,retain) NSURL * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * preferredAddresses;              //@synthesize preferredAddresses=_preferredAddresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)principalURL;
-(id)addresses;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSSet *)preferredAddresses;
-(void)setPreferredAddresses:(NSSet *)arg1 ;
@end

