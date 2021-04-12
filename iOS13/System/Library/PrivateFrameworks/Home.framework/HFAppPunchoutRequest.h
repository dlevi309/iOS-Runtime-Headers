/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _bundleID;
	NSURL* _payloadURL;
	NSURL* _storeURL;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSURL * payloadURL;               //@synthesize payloadURL=_payloadURL - In the implementation block
@property (nonatomic,readonly) NSURL * storeURL;                 //@synthesize storeURL=_storeURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleRequest:(id)arg1 ;
+(id)_openApplicationService;
+(BOOL)canHandleBundleID:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSURL *)storeURL;
-(NSURL *)payloadURL;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 payloadURL:(id)arg3 storeURL:(id)arg4 ;
@end

