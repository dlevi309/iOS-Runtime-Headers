/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSession:(id)arg1 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(BOOL)shouldPerformAnotherBatch;
-(void)performAfterSavingRecords:(/*^block*/id)arg1 ;
@end

