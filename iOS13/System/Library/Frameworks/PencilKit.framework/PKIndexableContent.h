/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class CHRecognitionSessionIndexableContent, NSString;

@interface PKIndexableContent : NSObject {

	CHRecognitionSessionIndexableContent* _chIndexableContent;

}

@property (retain) CHRecognitionSessionIndexableContent * chIndexableContent;              //@synthesize chIndexableContent=_chIndexableContent - In the implementation block
@property (nonatomic,readonly) NSString * indexableTextRepresentation; 
@property (nonatomic,readonly) NSString * presentableTextRepresentation; 
-(id)initWithIndexableContent:(id)arg1 ;
-(NSString *)indexableTextRepresentation;
-(NSString *)presentableTextRepresentation;
-(CHRecognitionSessionIndexableContent *)chIndexableContent;
-(void)setChIndexableContent:(CHRecognitionSessionIndexableContent *)arg1 ;
@end

