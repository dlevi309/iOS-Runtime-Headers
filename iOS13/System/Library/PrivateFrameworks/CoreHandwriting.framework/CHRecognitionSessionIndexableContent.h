/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject {

	NSString* _indexableTextRepresentation;
	NSString* _presentableTextRepresentation;

}

@property (nonatomic,copy,readonly) NSString * indexableTextRepresentation;                //@synthesize indexableTextRepresentation=_indexableTextRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * presentableTextRepresentation;              //@synthesize presentableTextRepresentation=_presentableTextRepresentation - In the implementation block
-(void)dealloc;
-(NSString *)indexableTextRepresentation;
-(NSString *)presentableTextRepresentation;
-(id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2 ;
@end

