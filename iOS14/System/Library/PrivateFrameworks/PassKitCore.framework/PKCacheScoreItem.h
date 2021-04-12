/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
-(BOOL)hasExpired;
-(id)initWithCoder:(id)arg1 ;
@end

