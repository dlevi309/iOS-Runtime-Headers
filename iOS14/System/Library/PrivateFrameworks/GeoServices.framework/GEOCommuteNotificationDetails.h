/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface GEOCommuteNotificationDetails : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	NSString* _message;
	NSString* _commuteDetailsIdentifier;
	NSDate* _expirationDate;
	long long _score;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * commuteDetailsIdentifier;              //@synthesize commuteDetailsIdentifier=_commuteDetailsIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long score;                                       //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)message;
-(id)init;
-(NSString *)commuteDetailsIdentifier;
-(id)initWithTitle:(id)arg1 message:(id)arg2 commuteDetailsIdentifier:(id)arg3 expirationDate:(id)arg4 score:(long long)arg5 ;
-(long long)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

