/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {

	BOOL _ascending;
	NSString* _name;

}

@property (copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)ascending;
-(void)setAscending:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ascending:(BOOL)arg2 ;
@end

