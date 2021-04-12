/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ATXSuggestionExecutableProtocol;
@class NSString;

@interface ATXExecutableIdentifier : NSObject <NSSecureCoding> {

	unsigned long long _type;
	id<ATXSuggestionExecutableProtocol> _object;

}

@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<ATXSuggestionExecutableProtocol> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * debugTitle; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(NSString *)debugTitle;
-(id)initWithAction:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<ATXSuggestionExecutableProtocol>)object;
-(id)initWithInfoSuggestion:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithHeroAppPrediction:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

