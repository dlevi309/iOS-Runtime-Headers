/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableSet;

@interface _UILibArchiveAppleDoublePathSet : NSObject {

	NSMutableSet* _confirmAppleDoublePaths;
	NSMutableSet* _pathsWithDotUnderscorePrefixedFilenames;

}
+(BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1 ;
-(id)init;
-(BOOL)isConfirmedExactAppleDoubleItem:(id)arg1 ;
-(void)confirmExactAppleDoubleFilesForItem:(id)arg1 ;
-(id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1 ;
@end

