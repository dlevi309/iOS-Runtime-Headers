/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDate;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSString* _title;
	NSDate* _lastVisitTime;

}

@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;              //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3 ;
-(NSDate *)lastVisitTime;
@end

