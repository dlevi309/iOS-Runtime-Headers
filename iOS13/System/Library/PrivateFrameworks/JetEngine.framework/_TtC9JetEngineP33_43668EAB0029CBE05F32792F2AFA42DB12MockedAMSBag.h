/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

#import <AppleMediaServices/AMSSnapshotBag.h>

@class NSDate, NSString;

@interface _TtC9JetEngineP33_43668EAB0029CBE05F32792F2AFA42DB12MockedAMSBag : AMSSnapshotBag {

	 bagProfile;
	 stubs;

}

@property (readonly,nonatomic) BOOL expired; 
@property (readonly,nonatomic) NSDate * expirationDate; 
@property (readonly,nonatomic) NSString * profile; 
@property (readonly,nonatomic) NSString * profileVersion; 
-(id)init;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
@end

