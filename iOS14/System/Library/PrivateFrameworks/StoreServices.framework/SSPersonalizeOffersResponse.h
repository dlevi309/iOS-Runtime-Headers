/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSArray, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {

	NSMutableDictionary* _actionDisplayNames;
	NSMutableDictionary* _actionParameters;
	NSArray* _items;
	NSMutableDictionary* _priceDisplayNames;

}

@property (nonatomic,readonly) NSArray * personalizedItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)priceDisplayForItemType:(id)arg1 ;
-(NSArray *)personalizedItems;
-(id)actionParametersForItemIdentifier:(id)arg1 ;
-(id)actionDisplayNameForItemType:(id)arg1 ;
-(void)_setPersonalizedItems:(id)arg1 ;
-(void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2 ;
-(void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2 ;
-(void)dealloc;
@end

