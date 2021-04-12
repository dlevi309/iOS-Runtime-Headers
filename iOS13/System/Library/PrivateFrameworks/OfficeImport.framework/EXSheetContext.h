/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OCDDelayedNodeContext.h>

@class EXReadState, NSURL, NSString;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {

	EXReadState* mSheetState;
	NSURL* mPackageLocation;
	NSString* mType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3 ;
@end

