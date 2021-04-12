/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate;

@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSDate* _date;

}

@property (nonatomic,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 date:(id)arg2 ;
@end

