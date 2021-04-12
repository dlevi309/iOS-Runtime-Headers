/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NSString;

@interface FMSystemVersionNumber : NSObject {

	long long _baseNumber;
	NSString* _baseLetter;
	long long _buildNumber;
	NSString* _suffix;

}

@property (assign,nonatomic) long long baseNumber;               //@synthesize baseNumber=_baseNumber - In the implementation block
@property (nonatomic,copy) NSString * baseLetter;                //@synthesize baseLetter=_baseLetter - In the implementation block
@property (assign,nonatomic) long long buildNumber;              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * suffix;                    //@synthesize suffix=_suffix - In the implementation block
-(id)initWithString:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)setBuildNumber:(long long)arg1 ;
-(NSString *)suffix;
-(long long)buildNumber;
-(id)debugDescription;
-(id)description;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)baseLetter;
-(void)setBaseLetter:(NSString *)arg1 ;
@end

