/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
-(BOOL)haveCKKSPlaintextEntitlements;
-(int)updateKeychain:(id)arg1 withAttributes:(id)arg2 ;
@end

