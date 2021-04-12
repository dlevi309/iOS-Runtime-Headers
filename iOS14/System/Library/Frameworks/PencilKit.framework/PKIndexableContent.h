/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

