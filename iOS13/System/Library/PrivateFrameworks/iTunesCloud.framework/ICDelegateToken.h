/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)initWithType:(long long)arg1 data:(id)arg2 ;
-(id)initWithType:(long long)arg1 data:(id)arg2 expirationDate:(id)arg3 ;
-(BOOL)expiresBeforeDate:(id)arg1 ;
@end

