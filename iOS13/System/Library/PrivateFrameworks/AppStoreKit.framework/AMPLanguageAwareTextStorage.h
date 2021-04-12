/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <libobjc.A.dylib/AMPWritingDirectionContentProtocol.h>

@class NSTextStorage;

@interface AMPLanguageAwareTextStorage : NSObject <NSTextStorageDelegate, AMPWritingDirectionContentProtocol> {

	 textStorage;
	 originalTextStorageDelegate;
	 languageAwareString;

}

@property (retain,nonatomic) NSTextStorage * textStorage; 
-(id)init;
-(NSTextStorage *)textStorage;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(id)initWithTextStorage:(id)arg1 ;
-(id)writingDirectionsQuantities;
-(long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(BOOL)arg5 ;
@end

