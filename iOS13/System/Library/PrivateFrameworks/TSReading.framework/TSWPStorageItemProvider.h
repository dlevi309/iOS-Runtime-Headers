/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting> {

	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                                                      //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
+(id)storageItemProviderWithString:(id)arg1 ;
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadPlainTextData:(/*^block*/id)arg1 ;
@end

