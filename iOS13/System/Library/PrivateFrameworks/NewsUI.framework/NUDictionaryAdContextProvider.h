/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSDictionary, NSString;

@interface NUDictionaryAdContextProvider : NSObject <NUAdContextProvider> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
@end

