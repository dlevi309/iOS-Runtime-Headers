/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <Foundation/NSFileCoordinator.h>

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {

	NSString* _localPeerID;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
+(id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
+(id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithFilePresenter:(id)arg1 ;
-(NSString *)localPeerID;
-(BOOL)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(BOOL)arg3 error:(id*)arg4 byAccessor:(/*^block*/id)arg5 ;
-(BOOL)shouldRetryForError:(id)arg1 ignoreFile:(BOOL*)arg2 ;
@end

