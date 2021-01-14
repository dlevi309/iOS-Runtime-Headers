/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)URLForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(NSString *)profileVersion;
@end

