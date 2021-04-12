/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface WBSRemoteHistorySession : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _items;

}

@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                           //@synthesize items=_items - In the implementation block
@property (getter=isCurrentSession,readonly) BOOL currentSession; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3 ;
-(NSArray *)items;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isCurrentSession;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

