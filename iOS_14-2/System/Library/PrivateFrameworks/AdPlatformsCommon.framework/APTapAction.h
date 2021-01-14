/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSNumber, NSDictionary;

@interface APTapAction : NSObject <NSSecureCoding> {

	long long _actionType;
	NSURL* _actionURL;
	double _confirmedClickInterval;
	NSNumber* _adamIdentifier;
	NSDictionary* _iTunesMetadata;

}

@property (assign) long long actionType;                       //@synthesize actionType=_actionType - In the implementation block
@property (retain) NSURL * actionURL;                          //@synthesize actionURL=_actionURL - In the implementation block
@property (assign) double confirmedClickInterval;              //@synthesize confirmedClickInterval=_confirmedClickInterval - In the implementation block
@property (retain) NSNumber * adamIdentifier;                  //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (retain) NSDictionary * iTunesMetadata;              //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSDictionary *)iTunesMetadata;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)adamIdentifier;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)actionURL;
-(double)confirmedClickInterval;
-(void)setConfirmedClickInterval:(double)arg1 ;
@end

