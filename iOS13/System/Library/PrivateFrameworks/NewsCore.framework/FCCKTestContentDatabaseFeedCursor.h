/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)order;
-(void)setOrder:(NSNumber *)arg1 ;
-(NSNumber *)subOrder;
-(void)setSubOrder:(NSNumber *)arg1 ;
@end

