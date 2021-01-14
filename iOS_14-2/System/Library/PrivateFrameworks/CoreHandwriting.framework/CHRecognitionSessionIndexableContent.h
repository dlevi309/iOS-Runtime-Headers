/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

