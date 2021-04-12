/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	BOOL _shouldPerformAnotherBatch;

}

@property (nonatomic,readonly) BOOL shouldPerformAnotherBatch;              //@synthesize shouldPerformAnotherBatch=_shouldPerformAnotherBatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(BOOL)shouldPerformAnotherBatch;
-(void)performAfterSavingRecords:(/*^block*/id)arg1 ;
@end

