/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext, CKKSControl, NSString;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;
	CKKSControl* _CKKSControl;
	NSString* _view;

}

@property (readonly) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) CKKSControl * CKKSControl;                         //@synthesize CKKSControl=_CKKSControl - In the implementation block
@property (retain) NSString * view;                                   //@synthesize view=_view - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
-(void)checkTLKStatus;
-(void)setCKKSControl:(CKKSControl *)arg1 ;
-(CKKSControl *)CKKSControl;
-(BOOL)ensureControl;
-(void)syncView;
@end

