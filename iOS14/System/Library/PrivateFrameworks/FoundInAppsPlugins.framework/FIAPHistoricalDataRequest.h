/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
*/

#import <FoundInAppsPlugins/FoundInAppsPlugins-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding> {

	unsigned long long _requestId;
	NSString* _pluginIdentifier;
	NSString* _personHandle;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) unsigned long long requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) NSString * pluginIdentifier;               //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * personHandle;                   //@synthesize personHandle=_personHandle - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(NSString *)personHandle;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRequestId:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)requestId;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pluginIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPluginIdentifier:(NSString *)arg1 ;
-(BOOL)subsetOfHistoricalDataRequest:(id)arg1 ;
-(id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithRequestId:(unsigned long long)arg1 pluginIdentifier:(id)arg2 personHandle:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(BOOL)isEqualToHistoricalDataRequest:(id)arg1 ;
-(BOOL)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1 ;
@end

