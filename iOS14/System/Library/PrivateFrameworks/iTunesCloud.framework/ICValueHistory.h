/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)lastValue;
-(void)addValuesFromHistory:(id)arg1 ;
-(void)removeAllValues;
-(void)addValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeValuesBeforeTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)firstValueBeforeTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

