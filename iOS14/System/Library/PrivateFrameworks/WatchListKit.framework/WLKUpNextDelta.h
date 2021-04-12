/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSArray;

@interface WLKUpNextDelta : NSObject <NSSecureCoding> {

	NSDictionary* _backingDictionary;
	NSDate* _timestamp;
	NSDate* _expirationDate;
	NSArray* _items;

}

@property (nonatomic,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additions; 
@property (nonatomic,copy,readonly) NSArray * removals; 
+(BOOL)supportsSecureCoding;
-(NSArray *)removals;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)items;
-(id)description;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)additions;
-(id)deltaByMergingItemsFromDelta:(id)arg1 ;
@end

