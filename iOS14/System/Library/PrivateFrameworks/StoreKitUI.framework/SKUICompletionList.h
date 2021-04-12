/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSArray *)completions;
-(NSString *)title;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithCompletionListDictionary:(id)arg1 ;
@end

