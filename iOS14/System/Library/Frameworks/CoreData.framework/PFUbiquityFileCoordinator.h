/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFilePresenter:(id)arg1 ;
-(NSString *)localPeerID;
-(BOOL)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 retryOnError:(BOOL)arg3 error:(id*)arg4 byAccessor:(/*^block*/id)arg5 ;
-(BOOL)shouldRetryForError:(id)arg1 ignoreFile:(BOOL*)arg2 ;
-(void)dealloc;
@end

