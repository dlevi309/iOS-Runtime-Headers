/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSAttributedString, NSArray, NSString;

@interface CKAttributedStringItemProvider : NSObject <NSItemProviderWriting> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSAttributedString *)attributedString;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)initWithAttributedString:(id)arg1 ;
@end

