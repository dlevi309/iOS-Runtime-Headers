/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest {

	BOOL _usesPixels;
	unsigned long long _maxWidth;
	unsigned long long _maxHeight;
	NSString* _sessionToken;

}

@property (assign,nonatomic) unsigned long long maxWidth;               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long maxHeight;              //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) BOOL usesPixels;                           //@synthesize usesPixels=_usesPixels - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;                     //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(unsigned long long)maxWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxHeight;
-(BOOL)usesPixels;
-(void)setUsesPixels:(BOOL)arg1 ;
-(void)setMaxWidth:(unsigned long long)arg1 ;
@end

