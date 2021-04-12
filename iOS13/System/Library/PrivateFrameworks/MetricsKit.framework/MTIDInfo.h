/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString, NSDate;

@interface MTIDInfo : NSObject {

	NSString* _ID;
	NSDate* _expirationDate;
	NSString* _idNamespace;

}

@property (nonatomic,retain) NSString * ID;                        //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * idNamespace;               //@synthesize idNamespace=_idNamespace - In the implementation block
-(id)description;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
-(id)initWithNamespace:(id)arg1 expiration:(id)arg2 ID:(id)arg3 ;
-(void)setIdNamespace:(NSString *)arg1 ;
-(NSString *)idNamespace;
@end

