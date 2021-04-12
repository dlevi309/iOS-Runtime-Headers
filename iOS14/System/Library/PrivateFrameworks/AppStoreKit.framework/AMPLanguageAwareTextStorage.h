/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(id)initWithTextStorage:(id)arg1 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(NSTextStorage *)textStorage;
-(id)writingDirectionsQuantities;
-(long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(BOOL)arg5 ;
@end

