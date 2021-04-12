/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

