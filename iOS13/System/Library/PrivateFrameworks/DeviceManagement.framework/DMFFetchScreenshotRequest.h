/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)maxWidth;
-(void)setMaxWidth:(unsigned long long)arg1 ;
-(unsigned long long)maxHeight;
-(void)setMaxHeight:(unsigned long long)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(BOOL)usesPixels;
-(void)setUsesPixels:(BOOL)arg1 ;
@end

