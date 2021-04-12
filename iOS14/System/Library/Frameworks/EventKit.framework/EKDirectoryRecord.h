/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSString, NSDictionary;

@interface EKDirectoryRecord : NSObject {

	NSString* _displayName;
	NSString* _preferredAddress;
	NSString* _principalPath;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * preferredAddress;              //@synthesize preferredAddress=_preferredAddress - In the implementation block
@property (nonatomic,copy) NSString * principalPath;                   //@synthesize principalPath=_principalPath - In the implementation block
@property (readonly) NSDictionary * userInfo; 
-(NSDictionary *)userInfo;
-(id)description;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)preferredAddress;
-(void)setPreferredAddress:(NSString *)arg1 ;
-(NSString *)displayName;
@end

