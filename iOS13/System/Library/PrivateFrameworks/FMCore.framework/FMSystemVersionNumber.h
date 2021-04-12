/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)suffix;
-(long long)buildNumber;
-(void)setBuildNumber:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)baseLetter;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setBaseLetter:(NSString *)arg1 ;
@end

