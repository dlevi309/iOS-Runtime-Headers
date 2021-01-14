/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3 ;
-(NSURL *)url;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)lastVisitTime;
@end

