/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSArray, NSString, NSMutableDictionary;

@interface SKUICompletionList : NSObject <SKUICacheCoding> {

	NSArray* _completions;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * completions;                                  //@synthesize completions=_completions - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)title;
-(NSArray *)completions;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithCompletionListDictionary:(id)arg1 ;
@end

