/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {

	NSString* _defaultNamingContext;

}

@property (nonatomic,retain) NSString * defaultNamingContext;              //@synthesize defaultNamingContext=_defaultNamingContext - In the implementation block
-(void)_performQuery;
-(int)numDownloadedElements;
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setDefaultNamingContext:(NSString *)arg1 ;
-(NSString *)defaultNamingContext;
@end

