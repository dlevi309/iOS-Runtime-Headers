/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(DDResultRef)arg1 ;
-(void)setLeadingText:(NSString *)arg1 ;
-(void)setTrailingText:(NSString *)arg1 ;
-(NSString *)leadingText;
-(NSString *)trailingText;
-(DDResultRef)result;
-(void)dealloc;
-(NSArray *)associatedResults;
-(void)setAssociatedResults:(NSArray *)arg1 ;
@end

