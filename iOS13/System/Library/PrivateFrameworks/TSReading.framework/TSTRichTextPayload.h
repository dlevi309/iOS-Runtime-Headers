/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {

	TSWPStorage* mStorage;

}

@property (nonatomic,retain) TSWPStorage * storage; 
-(id)string;
-(void)dealloc;
-(TSWPStorage *)storage;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 ;
-(BOOL)requiresRichText;
@end

