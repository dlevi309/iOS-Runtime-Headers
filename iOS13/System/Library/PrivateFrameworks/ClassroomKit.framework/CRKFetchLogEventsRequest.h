/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDate, NSString;

@interface CRKFetchLogEventsRequest : CATTaskRequest {

	NSDate* _cursorDate;
	NSString* _sessionToken;

}

@property (nonatomic,copy) NSDate * cursorDate;                  //@synthesize cursorDate=_cursorDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSDate *)cursorDate;
-(void)setCursorDate:(NSDate *)arg1 ;
@end

