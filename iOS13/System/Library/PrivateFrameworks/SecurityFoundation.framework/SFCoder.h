/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class SFCodingOptions;

@interface SFCoder : NSObject {

	id _coderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(SFCodingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(id)encodeTopLevelValue:(id)arg1 error:(id*)arg2 ;
@end

