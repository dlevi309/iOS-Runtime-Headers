/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {

	NSString* _defaultNamingContext;

}

@property (nonatomic,retain) NSString * defaultNamingContext;              //@synthesize defaultNamingContext=_defaultNamingContext - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(void)_performQuery;
-(int)numDownloadedElements;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setDefaultNamingContext:(NSString *)arg1 ;
-(NSString *)defaultNamingContext;
@end

