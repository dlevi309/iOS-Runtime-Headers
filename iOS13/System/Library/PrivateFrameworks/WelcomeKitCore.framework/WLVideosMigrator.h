/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, NSString;

@interface WLVideosMigrator : NSObject <WLDataclassMigrating> {

	NSObject*<OS_dispatch_semaphore> _importSema;
	BOOL _didSaveVideo;
	NSError* _saveError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)init;
-(id)contentType;
-(id)dataType;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
@end

