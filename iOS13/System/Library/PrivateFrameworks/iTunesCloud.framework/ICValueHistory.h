/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) long long count; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeAllValues;
-(void)addValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromHistory:(id)arg1 ;
-(id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1 ;
-(id)firstValueBeforeTimestamp:(unsigned long long)arg1 ;
-(id)lastValue;
-(void)removeValuesBeforeTimestamp:(unsigned long long)arg1 ;
@end

