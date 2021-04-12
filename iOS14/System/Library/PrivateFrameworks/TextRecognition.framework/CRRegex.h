/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSArray;

@interface CRRegex : NSObject {

	NSArray* _supportedRegularExpressions;

}

@property (nonatomic,retain) NSArray * supportedRegularExpressions;              //@synthesize supportedRegularExpressions=_supportedRegularExpressions - In the implementation block
-(id)init;
-(NSArray *)supportedRegularExpressions;
-(BOOL)stringMatchesRegex:(id)arg1 ;
-(void)setSupportedRegularExpressions:(NSArray *)arg1 ;
@end

