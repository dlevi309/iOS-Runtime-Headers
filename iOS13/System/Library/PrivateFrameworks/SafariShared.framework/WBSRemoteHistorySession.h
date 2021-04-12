/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)items;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3 ;
-(BOOL)isCurrentSession;
@end

