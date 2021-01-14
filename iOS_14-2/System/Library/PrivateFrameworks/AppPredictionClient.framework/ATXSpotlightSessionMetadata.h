/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXSpotlightSessionMetadata : NSObject <NSSecureCoding> {

	unsigned char _appConsumerSubType;
	unsigned char _actionConsumerSubType;
	BOOL _didSearchDuringSession;
	NSString* _engagedAppString;

}

@property (assign,nonatomic) unsigned char appConsumerSubType;                 //@synthesize appConsumerSubType=_appConsumerSubType - In the implementation block
@property (assign,nonatomic) unsigned char actionConsumerSubType;              //@synthesize actionConsumerSubType=_actionConsumerSubType - In the implementation block
@property (nonatomic,retain) NSString * engagedAppString;                      //@synthesize engagedAppString=_engagedAppString - In the implementation block
@property (assign,nonatomic) BOOL didSearchDuringSession;                      //@synthesize didSearchDuringSession=_didSearchDuringSession - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)engagedAppString;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDidSearchDuringSession:(BOOL)arg1 ;
-(BOOL)didSearchDuringSession;
-(unsigned char)appConsumerSubType;
-(unsigned char)actionConsumerSubType;
-(id)initWithAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2 engagedAppString:(id)arg3 didSearchDuringSession:(BOOL)arg4 ;
-(BOOL)isEqualToATXSpotlightSessionMetadata:(id)arg1 ;
-(id)initWithAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2 ;
-(void)setAppConsumerSubType:(unsigned char)arg1 ;
-(void)setActionConsumerSubType:(unsigned char)arg1 ;
-(void)setEngagedAppString:(NSString *)arg1 ;
@end

