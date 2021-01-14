/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTextInputRecognitionManagerDataSource <NSObject>
@required
-(id)recognitionManagerStrokeProvider:(id)arg1;
-(id)recognitionManagerTextInputTargets:(id)arg1;
-(id)recognitionManager:(id)arg1 textInputTargetForItemStableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 simultaneousItemStableIdentifiers:(id)arg4;
-(void)recognitionManager:(id)arg1 fetchContentInfoForTextInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 completion:(/*^block*/id)arg4;
-(void)recognitionManager:(id)arg1 recognitionDidFinishWithQueryItems:(id)arg2 duration:(double)arg3;

@end

