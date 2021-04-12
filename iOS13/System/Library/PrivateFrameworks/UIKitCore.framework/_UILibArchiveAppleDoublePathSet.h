/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableSet;

@interface _UILibArchiveAppleDoublePathSet : NSObject {

	NSMutableSet* _confirmAppleDoublePaths;
	NSMutableSet* _pathsWithDotUnderscorePrefixedFilenames;

}
+(BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1 ;
-(id)init;
-(BOOL)isConfirmedExactAppleDoubleItem:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesForItem:(id)arg1 ;
-(id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1 ;
@end

