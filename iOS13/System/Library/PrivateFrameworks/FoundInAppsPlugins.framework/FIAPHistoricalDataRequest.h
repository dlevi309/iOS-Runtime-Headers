/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)pluginIdentifier;
-(NSString *)personHandle;
-(unsigned long long)requestId;
-(void)setRequestId:(unsigned long long)arg1 ;
-(void)setPluginIdentifier:(NSString *)arg1 ;
-(BOOL)subsetOfHistoricalDataRequest:(id)arg1 ;
-(id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithRequestId:(unsigned long long)arg1 pluginIdentifier:(id)arg2 personHandle:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(BOOL)isEqualToHistoricalDataRequest:(id)arg1 ;
-(BOOL)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1 ;
@end

