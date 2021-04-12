/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	long long _progress;
	NSString* _localeIdentifier;
	unsigned long long _offlineState;
	long long _totalExpected;
	long long _totalWritten;
	double _expectedTimeRemaining;

}

@property (assign,nonatomic) long long progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                    //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long offlineState;              //@synthesize offlineState=_offlineState - In the implementation block
@property (assign,nonatomic) long long totalExpected;                      //@synthesize totalExpected=_totalExpected - In the implementation block
@property (assign,nonatomic) long long totalWritten;                       //@synthesize totalWritten=_totalWritten - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                               //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) double expectedTimeRemaining;                 //@synthesize expectedTimeRemaining=_expectedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localeIdentifier;
-(long long)progress;
-(id)init;
-(double)expectedTimeRemaining;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTotalWritten:(long long)arg1 ;
-(void)setTotalExpected:(long long)arg1 ;
-(void)setExpectedTimeRemaining:(double)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
-(BOOL)isStalled;
-(id)description;
-(void)setProgress:(long long)arg1 ;
-(long long)totalExpected;
-(long long)totalWritten;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)offlineState;
-(void)setOfflineState:(unsigned long long)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
@end

