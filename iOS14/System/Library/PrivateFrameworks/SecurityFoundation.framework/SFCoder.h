/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class SFCodingOptions;

@interface SFCoder : NSObject {

	id _coderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(id)initWithOptions:(id)arg1 ;
-(SFCodingOptions *)options;
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(id)encodeTopLevelValue:(id)arg1 error:(id*)arg2 ;
@end

