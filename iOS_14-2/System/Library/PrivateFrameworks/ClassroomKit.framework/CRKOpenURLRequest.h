/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSURL, NSString, NSArray;

@interface CRKOpenURLRequest : CATTaskRequest {

	BOOL _lockInApp;
	NSURL* _URL;
	NSString* _URLDisplayName;
	NSArray* _handlingBundleIdentifiers;

}

@property (nonatomic,copy) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * URLDisplayName;                        //@synthesize URLDisplayName=_URLDisplayName - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                                 //@synthesize lockInApp=_lockInApp - In the implementation block
@property (nonatomic,copy) NSArray * handlingBundleIdentifiers;              //@synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSString *)URLDisplayName;
-(NSArray *)handlingBundleIdentifiers;
-(void)setURLDisplayName:(NSString *)arg1 ;
-(void)setHandlingBundleIdentifiers:(NSArray *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)lockInApp;
@end

