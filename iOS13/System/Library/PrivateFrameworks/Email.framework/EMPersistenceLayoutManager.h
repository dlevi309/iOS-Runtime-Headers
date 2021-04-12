/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMPersistenceLayoutManager : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)mailAccountDirectory;
+(id)mailDataDirectory;
+(id)baseMailDirectoryPath;
+(id)mailAccountDirectoryPath;
+(id)mailDataDirectoryPath;
+(id)_nonContainerizedBaseMailDirectoryPathCreated:(BOOL*)arg1 ;
+(id)baseMailDirectory;
@end

