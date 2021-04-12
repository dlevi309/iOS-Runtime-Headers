/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/

#import <AlgosScoreFramework/AlgosScoreDataCSV.h>

@class NSDictionary;

@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV {

	BOOL _isMusic;
	NSDictionary* _methods;

}

@property (nonatomic,retain) NSDictionary * methods;              //@synthesize methods=_methods - In the implementation block
@property (assign,nonatomic) BOOL isMusic;                        //@synthesize isMusic=_isMusic - In the implementation block
+(id)streamDataCSV:(BOOL)arg1 ;
-(int)transformer;
-(NSDictionary *)methods;
-(BOOL)isMusic;
-(id)initIsMusic:(BOOL)arg1 ;
-(void)setIsMusic:(BOOL)arg1 ;
-(id)setUpMethods;
-(void)setMethods:(NSDictionary *)arg1 ;
-(BOOL)matchesMethod:(id)arg1 code:(long long)arg2 ;
-(BOOL)validMethod:(long long)arg1 ;
@end

