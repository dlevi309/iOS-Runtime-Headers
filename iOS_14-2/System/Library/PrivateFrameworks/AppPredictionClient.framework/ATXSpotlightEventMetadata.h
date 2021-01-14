/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSString, NSNumber;

@interface ATXSpotlightEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	NSString* _queryAtEngagement;
	NSNumber* _didSearchDuringSession;
	NSString* _searchEngagedBundleId;
	NSNumber* _searchEngagedActionType;

}

@property (nonatomic,retain) NSString * queryAtEngagement;                    //@synthesize queryAtEngagement=_queryAtEngagement - In the implementation block
@property (nonatomic,retain) NSNumber * didSearchDuringSession;               //@synthesize didSearchDuringSession=_didSearchDuringSession - In the implementation block
@property (nonatomic,retain) NSString * searchEngagedBundleId;                //@synthesize searchEngagedBundleId=_searchEngagedBundleId - In the implementation block
@property (nonatomic,retain) NSNumber * searchEngagedActionType;              //@synthesize searchEngagedActionType=_searchEngagedActionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDidSearchDuringSession:(NSNumber *)arg1 ;
-(NSNumber *)didSearchDuringSession;
-(void)setQueryAtEngagement:(NSString *)arg1 ;
-(void)setSearchEngagedBundleId:(NSString *)arg1 ;
-(void)setSearchEngagedActionType:(NSNumber *)arg1 ;
-(NSString *)queryAtEngagement;
-(NSString *)searchEngagedBundleId;
-(NSNumber *)searchEngagedActionType;
-(id)initWithQueryAtEngagement:(id)arg1 didSearchDuringSession:(id)arg2 searchEngagedBundleId:(id)arg3 searchEngagedActionType:(id)arg4 ;
-(BOOL)isEqualToATXSpotlightEventMetadata:(id)arg1 ;
@end

