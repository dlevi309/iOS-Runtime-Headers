/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface FCCKTestContentDatabaseFeedCursor : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _order;
	NSNumber* _subOrder;

}

@property (nonatomic,copy) NSNumber * order;                 //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSNumber * subOrder;              //@synthesize subOrder=_subOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubOrder:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)subOrder;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)order;
-(void)setOrder:(NSNumber *)arg1 ;
@end

