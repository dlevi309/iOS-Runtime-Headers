/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface ATXProactiveSuggestionUISpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	BOOL _allowedOnLockscreen;
	BOOL _allowedOnHomeScreen;
	BOOL _allowedOnSpotlight;
	BOOL _shouldClearOnEngagement;
	NSString* _title;
	NSString* _subtitle;
	NSString* _reason;
	NSArray* _preferredLayoutConfigs;

}

@property (nonatomic,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSArray * preferredLayoutConfigs;              //@synthesize preferredLayoutConfigs=_preferredLayoutConfigs - In the implementation block
@property (nonatomic,readonly) BOOL allowedOnLockscreen;                      //@synthesize allowedOnLockscreen=_allowedOnLockscreen - In the implementation block
@property (nonatomic,readonly) BOOL allowedOnHomeScreen;                      //@synthesize allowedOnHomeScreen=_allowedOnHomeScreen - In the implementation block
@property (nonatomic,readonly) BOOL allowedOnSpotlight;                       //@synthesize allowedOnSpotlight=_allowedOnSpotlight - In the implementation block
@property (nonatomic,readonly) BOOL shouldClearOnEngagement;                  //@synthesize shouldClearOnEngagement=_shouldClearOnEngagement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 preferredLayoutConfigs:(id)arg4 allowedOnLockscreen:(BOOL)arg5 allowedOnHomeScreen:(BOOL)arg6 allowedOnSpotlight:(BOOL)arg7 shouldClearOnEngagement:(BOOL)arg8 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 preferredLayoutConfigs:(id)arg3 allowedOnLockscreen:(BOOL)arg4 allowedOnHomeScreen:(BOOL)arg5 allowedOnSpotlight:(BOOL)arg6 ;
-(BOOL)allowedOnLockscreen;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)preferredLayoutConfigs;
-(NSString *)reason;
-(BOOL)allowedOnHomeScreen;
-(unsigned long long)hash;
-(BOOL)fuzzyIsEqualToUISpecification:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldClearOnEngagement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowedOnSpotlight;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

