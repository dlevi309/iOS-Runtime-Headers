/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData, NSArray;

@interface IDSActivityInfo : NSObject <NSSecureCoding> {

	NSString* _subActivity;
	NSDate* _expirationDate;
	NSData* _appContext;
	NSArray* _deviceUniqueIDs;
	NSArray* _tokens;
	NSArray* _URIs;

}

@property (nonatomic,readonly) NSArray * deviceUniqueIDs;              //@synthesize deviceUniqueIDs=_deviceUniqueIDs - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                       //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSArray * URIs;                         //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSString * subActivity;                 //@synthesize subActivity=_subActivity - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSData * appContext;                        //@synthesize appContext=_appContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activityInfoWithSubActivity:(id)arg1 devices:(id)arg2 ;
+(id)activityInfoWithSubActivity:(id)arg1 tokens:(id)arg2 ;
+(id)activityInfoWithSubActivity:(id)arg1 URIs:(id)arg2 ;
-(NSArray *)URIs;
-(NSArray *)tokens;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subActivity;
-(NSData *)appContext;
-(NSArray *)deviceUniqueIDs;
-(void)setAppContext:(NSData *)arg1 ;
-(id)_initWithSubActivity:(id)arg1 ;
@end

