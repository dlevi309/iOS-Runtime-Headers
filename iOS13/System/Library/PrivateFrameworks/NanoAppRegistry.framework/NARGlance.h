/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NARGlance : NSObject <NSSecureCoding> {

	NSString* _appID;
	NSString* _displayName;
	NSString* _glanceID;
	NSDictionary* _localizedDisplayNameMap;

}

@property (nonatomic,copy) NSString * appID;                                    //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * glanceID;                                 //@synthesize glanceID=_glanceID - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedDisplayNameMap;              //@synthesize localizedDisplayNameMap=_localizedDisplayNameMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)glanceID;
-(NSDictionary *)localizedDisplayNameMap;
-(void)setGlanceID:(NSString *)arg1 ;
-(void)setLocalizedDisplayNameMap:(NSDictionary *)arg1 ;
@end

