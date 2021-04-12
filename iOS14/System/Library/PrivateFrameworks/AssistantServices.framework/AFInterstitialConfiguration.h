/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isVoiceTrigger;
	BOOL _isDucking;
	BOOL _isTwoShot;
	long long _style;
	NSString* _languageCode;
	long long _gender;
	NSString* _recordRoute;
	unsigned long long _speechEndHostTime;

}

@property (nonatomic,readonly) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                                  //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordRoute;                       //@synthesize recordRoute=_recordRoute - In the implementation block
@property (nonatomic,readonly) BOOL isVoiceTrigger;                               //@synthesize isVoiceTrigger=_isVoiceTrigger - In the implementation block
@property (nonatomic,readonly) BOOL isDucking;                                    //@synthesize isDucking=_isDucking - In the implementation block
@property (nonatomic,readonly) BOOL isTwoShot;                                    //@synthesize isTwoShot=_isTwoShot - In the implementation block
@property (nonatomic,readonly) unsigned long long speechEndHostTime;              //@synthesize speechEndHostTime=_speechEndHostTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)recordRoute;
-(BOOL)isDucking;
-(BOOL)isTwoShot;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)languageCode;
-(BOOL)isVoiceTrigger;
-(id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(BOOL)arg5 isDucking:(BOOL)arg6 isTwoShot:(BOOL)arg7 speechEndHostTime:(unsigned long long)arg8 ;
-(unsigned long long)speechEndHostTime;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)gender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

