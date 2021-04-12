/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EMContentRequestOptionsBuilder.h>

@class NSString, NSArray;

@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder> {

	BOOL _includeSuggestionItems;
	BOOL _requestAllHeaders;
	NSString* _requestedRepresentation;
	long long _networkUsage;
	NSArray* _requestedHeaderKeys;

}

@property (nonatomic,copy) NSString * requestedRepresentation;              //@synthesize requestedRepresentation=_requestedRepresentation - In the implementation block
@property (assign,nonatomic) long long networkUsage;                        //@synthesize networkUsage=_networkUsage - In the implementation block
@property (assign,nonatomic) BOOL includeSuggestionItems;                   //@synthesize includeSuggestionItems=_includeSuggestionItems - In the implementation block
@property (nonatomic,copy) NSArray * requestedHeaderKeys;                   //@synthesize requestedHeaderKeys=_requestedHeaderKeys - In the implementation block
@property (assign,nonatomic) BOOL requestAllHeaders;                        //@synthesize requestAllHeaders=_requestAllHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(BOOL)arg3 ;
+(id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 ;
-(NSString *)requestedRepresentation;
-(BOOL)includeSuggestionItems;
-(NSArray *)requestedHeaderKeys;
-(BOOL)requestAllHeaders;
-(id)init;
-(void)setNetworkUsage:(long long)arg1 ;
-(id)copyWithBuilder:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)setRequestedRepresentation:(NSString *)arg1 ;
-(void)setIncludeSuggestionItems:(BOOL)arg1 ;
-(void)setRequestAllHeaders:(BOOL)arg1 ;
-(void)setRequestedHeaderKeys:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)networkUsage;
@end

