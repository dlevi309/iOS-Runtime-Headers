/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSCopying;
#import <UIKitCore/UIKitCore-Structs.h>
@interface UIWKDocumentRequest : NSObject {

	id<NSCopying> _inputElementIdentifier;
	long long _flags;
	long long _surroundingGranularity;
	long long _granularityCount;
	CGRect _documentRect;

}

@property (assign,nonatomic) long long flags;                                   //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long surroundingGranularity;                  //@synthesize surroundingGranularity=_surroundingGranularity - In the implementation block
@property (assign,nonatomic) long long granularityCount;                        //@synthesize granularityCount=_granularityCount - In the implementation block
@property (assign,nonatomic) CGRect documentRect;                               //@synthesize documentRect=_documentRect - In the implementation block
@property (nonatomic,retain) id<NSCopying> inputElementIdentifier;              //@synthesize inputElementIdentifier=_inputElementIdentifier - In the implementation block
-(void)dealloc;
-(long long)flags;
-(void)setFlags:(long long)arg1 ;
-(id<NSCopying>)inputElementIdentifier;
-(void)setInputElementIdentifier:(id<NSCopying>)arg1 ;
-(long long)surroundingGranularity;
-(void)setSurroundingGranularity:(long long)arg1 ;
-(long long)granularityCount;
-(void)setGranularityCount:(long long)arg1 ;
-(CGRect)documentRect;
-(void)setDocumentRect:(CGRect)arg1 ;
@end

