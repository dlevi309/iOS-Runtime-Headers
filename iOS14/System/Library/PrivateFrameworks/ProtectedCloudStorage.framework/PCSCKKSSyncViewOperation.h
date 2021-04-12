/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setView:(NSString *)arg1 ;
-(NSString *)view;
-(void)syncView;
-(id)initWithItemModifyContext:(id)arg1 ;
-(void)checkTLKStatus;
-(void)setCKKSControl:(CKKSControl *)arg1 ;
-(CKKSControl *)CKKSControl;
-(BOOL)ensureControl;
@end

