/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NSCopying>)inputElementIdentifier;
-(void)setInputElementIdentifier:(id<NSCopying>)arg1 ;
-(long long)surroundingGranularity;
-(long long)granularityCount;
-(void)setSurroundingGranularity:(long long)arg1 ;
-(void)setGranularityCount:(long long)arg1 ;
-(void)setDocumentRect:(CGRect)arg1 ;
-(long long)flags;
-(void)setFlags:(long long)arg1 ;
-(void)dealloc;
-(CGRect)documentRect;
@end

