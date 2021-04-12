/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSString, NSArray;

@interface DDActionNaturalLanguageContext : NSObject {

	NSString* _leadingText;
	NSString* _trailingText;
	DDResultRef _result;
	NSArray* _associatedResults;

}

@property (retain) NSString * leadingText;                   //@synthesize leadingText=_leadingText - In the implementation block
@property (retain) NSString * trailingText;                  //@synthesize trailingText=_trailingText - In the implementation block
@property (retain) DDResultRef result;                       //@synthesize result=_result - In the implementation block
@property (retain) NSArray * associatedResults;              //@synthesize associatedResults=_associatedResults - In the implementation block
-(void)dealloc;
-(DDResultRef)result;
-(NSString *)leadingText;
-(NSString *)trailingText;
-(void)setResult:(DDResultRef)arg1 ;
-(void)setLeadingText:(NSString *)arg1 ;
-(void)setTrailingText:(NSString *)arg1 ;
-(NSArray *)associatedResults;
-(void)setAssociatedResults:(NSArray *)arg1 ;
@end

