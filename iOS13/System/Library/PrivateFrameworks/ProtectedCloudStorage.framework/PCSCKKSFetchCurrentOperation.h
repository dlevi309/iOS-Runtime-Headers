/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
-(BOOL)haveAlternate;
-(void)fetchAlternate;
-(void)fetchComplete:(CFDataRef)arg1 point:(id)arg2 alternate:(BOOL)arg3 error:(CFErrorRef)arg4 ;
-(void)fetchCurrentItem:(id)arg1 viewhint:(id)arg2 complete:(/*^block*/id)arg3 ;
-(BOOL)shouldRelocate;
-(void)fetchPersistentRef:(id)arg1 alternate:(BOOL)arg2 ;
@end

