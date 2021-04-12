/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)cursorDate;
-(void)setCursorDate:(NSDate *)arg1 ;
@end

