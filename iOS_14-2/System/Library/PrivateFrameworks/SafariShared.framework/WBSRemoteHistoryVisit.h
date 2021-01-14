/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 date:(id)arg2 ;
-(NSURL *)url;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
@end

