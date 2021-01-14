/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTextInputHandwritingShotDelegate <NSObject>
@required
-(void)handwritingShotDidChangeState:(id)arg1;
-(void)handwritingShot:(id)arg1 willFocusAndLoadDataForTargetElement:(id)arg2;
-(void)handwritingShotDidOverrideStrongCursor:(id)arg1;
-(id)handwritingShotStrokeIdentifiersToExcludeFromRecognition:(id)arg1;
-(id)handwritingShot:(id)arg1 preferredTargetElementForQueryItemStableIdentifier:(id)arg2 simultaneousItemStableIdentifiers:(id)arg3 proposedTargetElement:(id)arg4;
-(NSRange*)handwritingShot:(id)arg1 inProgressGestureInitialSelectedRangeForElementRecognitionIdentifier:(id)arg2;
-(long long)handwritingShot:(id)arg1 lastCharacterLevelPositionForElementRecognitionIdentifier:(id)arg2;
-(BOOL)handwritingShot:(id)arg1 hasCommittedResultsInSessionToElementRecognitionIdentifier:(id)arg2;
-(NSRange*)handwritingShot:(id)arg1 activePreviewRangeForElementRecognitionIdentifier:(id)arg2 queryItemStableIdentifier:(id)arg3;
-(BOOL)handwritingShot:(id)arg1 shouldSuppressGesturesForStrokesBounds:(CGRect)arg2 coordinateSpace:(id)arg3;

@end

