/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OCDDelayedNodeContext.h>

@class EBReaderSheetState, NSString;

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {

	EBReaderSheetState* mSheetState;
	unsigned mSheetIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetIndex:(unsigned)arg1 state:(id)arg2 ;
@end

