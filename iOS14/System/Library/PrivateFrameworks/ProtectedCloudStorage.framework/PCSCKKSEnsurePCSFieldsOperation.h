/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

