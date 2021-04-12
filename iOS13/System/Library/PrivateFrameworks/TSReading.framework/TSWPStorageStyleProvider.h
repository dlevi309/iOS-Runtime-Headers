/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPStyleProvider.h>

@class NSString;

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
+(id)styleProviderForStorage:(id)arg1 ;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
@end

