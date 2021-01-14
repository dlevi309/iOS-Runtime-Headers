/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	long long _type;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(NSData *)data;
-(BOOL)isExpired;
-(long long)type;
-(id)initWithType:(long long)arg1 data:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 data:(id)arg2 expirationDate:(id)arg3 ;
-(BOOL)expiresBeforeDate:(id)arg1 ;
@end

