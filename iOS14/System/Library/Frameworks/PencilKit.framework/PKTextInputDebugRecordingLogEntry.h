/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTextInputDebugLogEntry.h>

@class CHTextInputQueryItem, PKDrawing;

@interface PKTextInputDebugRecordingLogEntry : PKTextInputDebugLogEntry {

	CHTextInputQueryItem* __resultQueryItem;
	PKDrawing* __originalDrawing;

}

@property (nonatomic,retain) CHTextInputQueryItem * _resultQueryItem;              //@synthesize _resultQueryItem=__resultQueryItem - In the implementation block
@property (nonatomic,retain) PKDrawing * _originalDrawing;                         //@synthesize _originalDrawing=__originalDrawing - In the implementation block
+(id)_dictionaryRepresentationForDrawing:(id)arg1 detailLevel:(long long)arg2 containsInProgress:(BOOL)arg3 ;
+(id)_dictionaryRepresentationForTarget:(id)arg1 ;
+(id)_dictionaryRepresentationForTargetContentInfo:(id)arg1 elementType:(id)arg2 detailLevel:(long long)arg3 contentLevel:(long long)arg4 resultAffectedRange:(NSRange)arg5 localeIdentifier:(id)arg6 ;
-(id)initWithResultCommand:(id)arg1 ;
-(id)inputDrawing;
-(id)dictionaryRepresentationWithDetailLevel:(long long)arg1 targetContentLevel:(long long)arg2 ;
-(void)_extractDataFromResultCommand:(id)arg1 ;
-(void)set_originalDrawing:(PKDrawing *)arg1 ;
-(void)set_resultQueryItem:(CHTextInputQueryItem *)arg1 ;
-(PKDrawing *)_originalDrawing;
-(CHTextInputQueryItem *)_resultQueryItem;
@end

